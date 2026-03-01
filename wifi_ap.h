#ifndef WIFI_AP_H
#define WIFI_AP_H

#include <WiFi.h>
#include "config.h"

void startAccessPoint()
{
    WiFi.mode(WIFI_AP);
    WiFi.softAP(AP_SSID, AP_PASSWORD);

    Serial.println("Access Point Started");
    Serial.print("SSID: ");
    Serial.println(AP_SSID);

    Serial.print("IP Address: ");
    Serial.println(WiFi.softAPIP());
}

#endif
