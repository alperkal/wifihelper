#include "WifiUtil.h"

WifiUtil::WifiUtil(int count,void (*f)(), ...){
  va_list ap;
  int i;
  onConnectFunction = f;
  va_start (ap, count);         /* Initialize the argument list. */
  for (i = 0; i <= count-1; i=i+2)
    wifiMulti.addAP(va_arg (ap, char*), va_arg (ap, char*));

  va_end (ap);                  /* Clean up. */
}

void WifiUtil::connect() {
    Serial.println("Connecting Wifi...");
    if(wifiMulti.run() == WL_CONNECTED) {
        Serial.println("");
        Serial.println("WiFi connected");
        Serial.println("IP address: ");
        Serial.println(WiFi.localIP());
        onConnectFunction();

    }
   
    // Connected!
    Serial.printf("[WIFI] STATION Mode, SSID: %s, IP address: %s\n", WiFi.SSID().c_str(), WiFi.localIP().toString().c_str());
}

boolean WifiUtil::isConnected(){
  return wifiMulti.run() == WL_CONNECTED;
}
