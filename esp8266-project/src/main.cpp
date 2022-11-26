#include <ESP8266WiFi.h>
#include <WiFiClient.h>

#include <ESP8266WebServer.h>

//HMTL webpage contents
#include "index.h"

//SSID and Password of Wifi router
const char* ssid = "";
const char* password = ""; 

ESP8266WebServer server(80); //Port of server

void setup() {
  Serial.begin(9600);
  
  //Connect to your WiFi router
  WiFi.begin(ssid, password);     

  //Wait for pass the security
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("Couldn't connect to Wifi Router!");
  }

  //Show up information when connection successful
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP())



}

void loop() {
  // put your main code here, to run repeatedly:

}