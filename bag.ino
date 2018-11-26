#include <Arduino.h>

#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>

#include <ESP8266HTTPClient.h>
#include <ArduinoJson.h>

#define USE_SERIAL Serial
bool alarm = false;
bool letAlarm = true;
bool stopAlarm = false;
const double THRESHOLD;
int speakerPin, freq;

void sendAlarmToServer(){
  // TODO
}

void sendAckToServer(){
  // TODO
}

void getDataFromServer(){
  // TODO
  HTTPClient http;
  http.begin("ServerName");
  int httpCode = http.GET();
  if(httpCode > 0){
    String payLoad = http.getString();
    StaticJsonBuffer<256> jsonBuffer;
    JsonObject& object = jsonBuffer.parseObject(payload);
    //TODO WITH OBJECT
  }
  
}

void setup() {
  // put wyour setup code here, to run once:
  pinMode(speakerPin ,OUTPUT);
  digitalWrite(speakerPin, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  getDataFromServer();
  
  double x,y,z;
  if(letAlarm){  
    if(x**2+y**2+z**2 > THRESHOLD){
      alarm = true;
      sendAlarmToServer();
      while(!stopAlarm){
        //play sound
        tone(speakerPin, freq);
        getDataFromServer();
        
      }
      noTone(speakerPin);
      senAckToServer();
      alarm = false;
    }
  }
}
