#ifndef WifiUtil_h
#define WifiUtil_h

#include <stdarg.h>
#include <WiFi.h>
#include <WiFiMulti.h>
#define MAX_CONNECTION_ERROR_DURATION 600 // seconds

class WifiUtil
{
  public:
    WifiUtil(int count,void (*f)(), ...);
    void connect();
    boolean isConnected();
  private:
    WiFiClient client;
    WiFiMulti wifiMulti;
    void (*onConnectFunction)();
    
};

#endif
