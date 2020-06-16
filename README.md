<img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/A.jpeg" width="200">  <br>
# ESP8266 To  GOOGLE FIREBASE
## ***Arduino IDE Setup*** :

 1. Install Arduino IDE. [link here](https://www.arduino.cc/en/main/software)<br>
 2. Now we have to Install ESP8266 Board.<br>
* Copy<br>
```
https://arduino.esp8266.com/stable/package_esp8266com_index.json
```


* ***File*** >> ***Preferences*** >> Paste the Url into the *Additional Board Manager URLs*<br>
<img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/B.png" width="400"> <br>
<img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/B3.png" width="400"> <br>

3. ***Tools*** >> ***Board*** >>***Boards Manager*** <br>
<img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/B6.png" width="400"> <br>

4. Type **esp8266** in the search bar and Install it.<br>
<img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/B7.png" width="600"> <br><br>

5. Connect ESP8266 and upload the Code by selecting ***Tools*** >> ***Board*** >> ***NodeMCU***.<br>
<img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/B8.png" width="400"> <br><br>

6. Installing Firebase library<br>
 * [click here]() to download the library
 * Go to ***Sketch*** >> ***Include Library*** >> ***Add .ZIP Library*** >> Select the downloaded firebase library<br><br>
 <img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/B8.png" width="400"> <br><br>
 
 7. Installing ArduinoJson library
* ***Sketch***  >>***Include Library*** >> ***Manage Libraries***  >> Type ***ArduinoJson***  >> Install a lower Version<br>
<img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/B8.png" width="400"> <br><br>

## ***Google Firebase Setup*** :

8. Open Google Firebase Website [link](https://firebase.google.com/)<br>
<img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/B8.png" width="400"> <br><br>

9. Sign in using your G-Mail
10. click on ***Create a project***<br>
<img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/B8.png" width="400"> <br><br>

11. Enter a Project Name and read & accept the terms<br>
<img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/B8.png" width="400"> <br><br>

12. Click on ***Continue***<br>
<img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/B8.png" width="400"> <br><br>

13. Select ***Default Account for Firebase***<br>
<img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/B8.png" width="400"> <br><br>

14. Your Project will be created & loaded .Click on  ***Continue***<br>
<img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/B8.png" width="400"> <br><br>

## ***Coding*** : 
### [code]()

15.  Include necessary libraries
```
#include <ESP8266WiFi.h>
#include <SoftwareSerial.h>
#include <FirebaseArduino.h>
#include <ArduinoJson.h>
#include <ESP8266HTTPClient.h>
```
16. ### Provide your realtime database URL
```
#define FIREBASE_HOST "nodemcu-f1480.firebaseio.com"
```
<br>

*  Open Firebase >> ***Database*** <br>
<img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/B8.png" width="400"> <br><br>

* ***choose Realtime database*** >> ***Create database***<br>
<img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/B8.png" width="400"> <br><br>

* ***Start in test mode*** >> ***click Enable***<br>
<img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/B8.png" width="400"> <br><br>

* Copy your database URL <br>
<img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/B8.png" width="400"> <br><br>

* Paste it in the Arduino code

17. ### Provide your database authentication key
```
#define FIREBASE_AUTH "dTwHzZsYGaH4hoK5hr1NZvNdtXyeovgGQO2e3vut"
```
* For this, click on ***Project Overview*** >> ***Project Settings***<br>
 <img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/B8.png" width="400"> <br><br>
 
 * ***Service Accounts*** >> ***Database Secrets***<br>
 <img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/B8.png" width="400"> <br><br>
 
 * Copy the secret key and paste it in the Arduino code

18. Connect the ESP8266 to a WIFI-Hotspot by giving its SSID and Password
```
#define WIFI_SSID "Name"
#define WIFI_PASSWORD "P455Word"
```
19. Starting the Serial Monitor Communication
```
Serial.begin(9600);
```
20. Checking whether connection is available and displaying IP address if the connection is successfull
```
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
  ```
21. Initializing Firebase Connection
```
 Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
```
22. Senting data to Google Firebase
```
Serial.print("CHECK the DATABASE"); 
Firebase.setString("ROLL_NO_112","PIXER");
delay(5000);
Firebase.setString("ROLL_NO_12","AVA");
delay(5000);
Firebase.setString("ROLL_NO_26","WALL_E");
delay(5000);
delay(1000);            
```

23. In your Realtime Databse of Firebase you can see the changes<br>
 <img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/B8.png" width="400"> <br><br>