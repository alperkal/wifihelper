# Wifi Util

## Usage:

add import:

```c
#include <WifiUtil.h>

```

initialize object:

```c
//  wifiUtil(# of wirelesses, onConnectFunction, WIFI_1_SSID,WIFI_1_PASS, WIFI_2_SSID,WIFI_2_PASS ...WIFI_N_SSID,WIFI_N_PASS);

WifiUtil wifiUtil(1, wifiStatusToLcd, WIFI_1_SSID,WIFI_1_PASS, WIFI_2_SSID,WIFI_2_PASS );
```

start the connection:

```c
wifiUtil.connect();
```

Regularly check status

```c
wifiUtil.isConnected()
```
