#ifndef LOGGER_H
#define LOGGER_H

void logClient(IPAddress ip)
{

Serial.println("Client Interaction Logged");

Serial.print("Client IP: ");
Serial.println(ip);

Serial.print("Timestamp: ");
Serial.println(millis());

}

#endif
