(function () {
  Pebble.addEventListener("ready", function() {
    console.log("app::ready");
  });

  Pebble.addEventListener("showConfiguration", function() {
    var url = "https://google.com";

    console.log("app::showConfiguration: " + url);
    Pebble.openURL(url);
  });
}());
