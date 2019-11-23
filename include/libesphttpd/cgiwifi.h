#ifndef CGIWIFI_H
#define CGIWIFI_H

#include "httpd.h"

#ifdef __cplusplus
extern "C" {
#endif
CgiStatus cgiWiFiScan(HttpdConnData *connData);
CgiStatus tplWlan(HttpdConnData *connData, char *token, void **arg);
CgiStatus cgiWiFi(HttpdConnData *connData);
CgiStatus cgiWiFiConnect(HttpdConnData *connData);
CgiStatus cgiWiFiSetMode(HttpdConnData *connData);
CgiStatus cgiWiFiAPSettings(HttpdConnData *connData);
CgiStatus cgiWiFiConnStatus(HttpdConnData *connData);

#ifdef ESP32
#include <esp_event.h>
esp_err_t initCgiWifi(void);
void cgiWifiEventCb(system_event_t *event);
CgiStatus cgiWiFiStartWps(HttpdConnData *connData);
#endif
#ifdef __cplusplus
}
#endif


#endif
