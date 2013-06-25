CurrencySetter.toggleCurrency = function(){
   var currencies = $(".currency");
   currencies.hide();
   currencies.filter("." + CurrencySetter.currency).show();
}
$(window).load(function(){
   CurrencySetter.toggleCurrency();
   });