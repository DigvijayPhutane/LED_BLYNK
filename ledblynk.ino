#define BLYNK_TEMPLATE_ID "TMPLDGYbuY0i"
#define BLYNK_DEVICE_NAME "led"
#define BLYNK_AUTH_TOKEN "QMu1Ejo9B0J0PxS_e2zD2ziJYN4tpb1b"  //blynk app tokan code


#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>  
#include <BlynkSimpleEsp8266.h>
 

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "God Of Thunder 2G";  // Enter your Wifi Username
char pass[] = "Thor@hatoda";  // Enter your Wifi password

int ledpin = D4;
void setup()
{     
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);    
  pinMode(ledpin,OUTPUT);
}

void loop()
{
  Blynk.run(); 
}
