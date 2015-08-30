/* global Pebble */
(function () {
  Pebble.addEventListener("ready", function () {
    console.log("app::ready");
    
    Pebble.timelineSubscribe("all", 
      function () { 
        console.log("app::ready::subscribe::succeeded");
      }, 
      function (error) { 
        console.log("app::ready::subscribe::failed: %s", error);
      }
    );
    
    Pebble.timelineSubscriptions(
      function (topics) {
        console.log("app::ready::subscriptions::succeeded: %s", topics.join(", "));
      },
      function (error) {
        console.log("app::ready::subscriptions::failed: %s", error);
      }
    );
  });

  Pebble.addEventListener("showConfiguration", function () {
    var url = "http://fotv2.azurewebsites.net/";

    console.log("app::showConfiguration: %s", url);
    Pebble.openURL(url);
  });
  
  Pebble.addEventListener("webviewclosed", function (e) {
    console.log("app::webviewclosed");
    
    var configData = JSON.parse(decodeURIComponent(e.response));

    console.log("Configuration page returned: %s", JSON.stringify(configData));

    /*
    var success = function () {
      console.log("app::webviewclosed::success");
    };

    var failure = function () {
      console.log("app::webviewclosed::failure");
    };
    */
  });
}());
