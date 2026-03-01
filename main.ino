#include <WiFi.h>
#include "config.h"
#include "fsm_controller.h"
#include "wifi_ap.h"
#include "captive_portal.h"
#include "logger.h"

SystemState currentState = INIT;

void setup()
{

Serial.begin(SERIAL_BAUD);

delay(2000);

Serial.println("System Booting");

}

void loop()
{

switch(currentState)
{

case INIT:

Serial.println("Initializing system");

startAccessPoint();

startPortal();

currentState = AP_BROADCAST;

break;



case AP_BROADCAST:

server.handleClient();

Serial.println("Waiting for user connection...");

delay(3000);

currentState = CAPTIVE_PORTAL;

break;



case CAPTIVE_PORTAL:

server.handleClient();

Serial.println("Captive portal active");

delay(2000);

currentState = DATA_CAPTURE;

break;



case DATA_CAPTURE:

if(server.client())
{
logClient(server.client().remoteIP());
}

delay(2000);

currentState = CAPTIVE_PORTAL;

break;

}

}
