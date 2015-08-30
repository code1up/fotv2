/* global Pebble */
(function () {
  Pebble.addEventListener("ready", function() {
    console.log("app::ready");
  });

  Pebble.addEventListener("showConfiguration", function() {
    var url = "http://fotv2.azurewebsites.net/";

    console.log("app::showConfiguration: %s", url);
    Pebble.openURL(url);
  });
}());
