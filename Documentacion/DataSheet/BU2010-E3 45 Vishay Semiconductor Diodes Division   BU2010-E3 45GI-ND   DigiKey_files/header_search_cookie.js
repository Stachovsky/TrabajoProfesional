$(function(){

/**
* checkCookie() first function called, checks to see if cookie is there, if it is then set the appropriate dropdown selection
* sets the form submit function to update cookies.
* sets the searchDomain click function to change the location of the form submit action
*/
function checkCookie() {

  var SearchPreferenceCookie = getCookie("SearchPreference");
  if (SearchPreferenceCookie) {
	var prefs = JSON.parse(SearchPreferenceCookie);
    
    prefs.items = prefs.items || {};
    if (prefs.items.searchpreference === "content") {
		$('#header select[name=searchDomain]').attr("value", "content");
		update_form_action($('#header select[name=searchDomain]').attr("value"));
    } else {
		$('#header select[name=searchDomain]').attr("value", "parts");
		update_form_action($('#header select[name=searchDomain]').attr("value"));
    }
  }
 
  
  //Set the Sform submit function (jquery object), must update the cookie to whats in the dropdown
  $('#header form[name=Sform]').submit(function() {
	var prefs = {};
	SearchPreferenceCookie = getCookie("SearchPreference");
	if (!SearchPreferenceCookie) {
		//create the cookie for the first time
		prefs.items = {};
		prefs.items.searchpreference = $('#header select[name=searchDomain]').attr("value");
  } else {
		prefs = JSON.parse(SearchPreferenceCookie);
  }
	var preference = $('#header select[name=searchDomain]').attr("value");
    prefs.items = prefs.items || {};
    prefs.items.searchpreference = preference;
    setCookie("SearchPreference", JSON.stringify(prefs));
  });
  
  //when a new search option is selected (jquery object), update the form action
  $('#header select[name=searchDomain]').change(function(){
  update_form_action($('#header select[name=searchDomain]').attr("value"));
  });
  
}


function getCookie(c_name){
 var i,x,y,ARRcookies=document.cookie.split(";");
 for (i=0;i<ARRcookies.length;i++){
   x=ARRcookies[i].substr(0,ARRcookies[i].indexOf("="));
   y=ARRcookies[i].substr(ARRcookies[i].indexOf("=")+1);
   x=x.replace(/^\s+|\s+$/g,"");
   if (x==c_name){
     return unescape(y);
   }
 }
}

/**
* function to change the header form submit action between content and parts searches.
*/
function update_form_action(preference){
	var keywords = $('#header input[name=keywords]');
	var Ntt = $('#header input[name=Ntt]');
	if(preference == "parts"){
		$('#header input[name=Ntt]').attr("name","keywords");
		document.Sform.action = "http://" + $('#header option[name=partSearch]').attr("serverURL") + "/scripts/DkSearch/dksus.dll"; 
	} else {
		$('#header input[name=keywords]').attr("name","Ntt");
		document.Sform.action = "http:" + $('#header option[name=wwwServer]').attr("serverURL") + "/sitesearch/en";
	}
}
	 
/**
* W3C schools slightly modified setCookie method, had to update path or else cookie isn't valid for whole website
*/
function setCookie(c_name,value) {
	var c_value=escape(value) + "; domain=.digikey.com; path=/";
	document.cookie=c_name + "=" + c_value;
}

	checkCookie();
});