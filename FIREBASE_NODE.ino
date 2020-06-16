#include <ESP8266WiFi.h>
#include <SoftwareSerial.h>
#include <FirebaseArduino.h>
#include <ArduinoJson.h>
#include <ESP8266HTTPClient.h>


#define FIREBASE_HOST ""
#define FIREBASE_AUTH ""
#define WIFI_SSID ""
#define WIFI_PASSWORD ""


void setup()
{
  
  Serial.begin(9600);

  
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  
  while (WiFi.status() != WL_CONNECTED)
      {
     Serial.print("\n");
    Serial.print("CONNECTING.....");
    delay(500);
      }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);

   
}

void loop()
{   



Serial.print("Check the Google Firebase Database"); 
Firebase.setString("ROLL_NO_112","PIXER");
delay(5000);
Firebase.setString("ROLL_NO_12","AVA");
delay(5000);
Firebase.setString("ROLL_NO_26","WALL_E");
delay(5000);

delay(1000);            
}
