// Based on https://developer.mozilla.org/en/DOM/Storage
var invalidateList = new Array();
(function() {
  var domain = location.hostname.match(/\.digikey\..*/)[0];
  
	var storage = {
		getItem: function(sKey) {
			var aCouples = document.cookie.split(/;\s*/);
			for ( var i = 0; i < aCouples.length; i++) {
				var iCouple = aCouples[i].split('=');
				if (iCouple.length > 1) {
					var iKey = unescape(iCouple[0]);
					var iValue = unescape(iCouple[1]);
					if (iKey === sKey) {
						return iValue;
					}
				}
			}
		},
		setItem: function(sKey, sValue) {
			if (!sKey) {
				return;
			}
			document.cookie = escape(sKey) + "=" + escape(sValue) +
			  "; path=/; domain=" + domain +";";
		},
		removeItem: function(sKey) {
			if (!sKey) {
				return;
			}
			var sExpDate = new Date();
			sExpDate.setDate(sExpDate.getDate() - 1);
			document.cookie = escape(sKey) + "=; expires=" + sExpDate.toGMTString() +
			  "; path=/; domain=" + domain + ";";
		}
	};

	function unpack(data) {
		var kvs = data.split(';');
		var res = {};
		for ( var i = 0; i < kvs.length; i++) {
			var parts = kvs[i].split('=');
			res[parts[0]] = parts[1];
		}
		return res;
	}

	function pack(data) {
	  var res = [];
	  for (var key in data) {
	    res.push(key + '=' + data[key]);
	  }
	  return res.join(';');
	}
	
	function gatherWebtrendsData(node) {
	  var res = {};
	  while (true) {
	    var data = $(node).attr('data-webtrends');
	    if (!data) { 
		data = $(node).attr('wt_name'); 
	    }
	    if (data) {
	      data = unpack(data);
	      for (var key in data) {
	        if (!res[key]) {
	          res[key] = data[key];
	        }
	      }
	    }
	    
	    node = node.parentNode;
	    
	    if (node == document) {
	      break;
	    } else if ($(node).attr('data-wt-root') === "true") {
	      break;
	    }
	  }
	  return pack(res);
	}
	
	// Edit tag object
	var loc = location.href.replace(/\?.*/, '');
	var data = storage.getItem('wt-' + loc);
	storage.removeItem('wt-' + loc);
	if (data) {
		data = unpack(data);
		for ( var key in data) {
			_tag["WT"][key.replace("WT.","")] = data[key];
			invalidateList.push(key.replace("WT.",""));
		}
	}

	// Prepare anchor tags
	$(function() {
		$('a').live("mousedown",(function() {
			var wtdata = gatherWebtrendsData(this);
			if (wtdata) {
			  var loc = this.href.replace(/\?.*/, '');
			  storage.setItem('wt-' + loc, wtdata);
			}
		}));
		$('a').live("keydown",(function(e) {
			var code = (e.keyCode ? e.keyCode : e.which);
			 if(code == 13) { 
				var wtdata = gatherWebtrendsData(this);
				if (wtdata) {
				  var loc = this.href.replace(/\?.*/, '');
				  storage.setItem('wt-' + loc, wtdata);
				}
			}
		}));
	});
}());
