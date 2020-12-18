#include <Arduino.h>
#include <ArduinoJson.h>
#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>
#include <ESP8266WebServer.h>
#include <ESP8266WebServerSecure.h>


void setup() {
    Serial.begin(115200);
    while (!Serial) continue;
}

void loop() {
    Serial.println("Dzialaaaa\n");

}