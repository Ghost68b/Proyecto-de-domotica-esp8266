#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = "b8c7a90390e742bba1a7ac69829ef6cd";
char ssid[] = "Nombre de la red";
char pass[] = "Contrasena de la red";
void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}
void loop()
{
  Blynk.run();
}
