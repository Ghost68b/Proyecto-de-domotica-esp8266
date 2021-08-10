/* Descargar blynk en tu dispositivo y crear una cuenta */
/* Crea un proyecto y genera AUTH TOKENS QUE SE TE ENVIARA A TU CORREO COPELO Y REMPLASA POR EL QUE ES EN AUTH*/
/*Pasos dentro del id de arduino*/
/* Archivos/ preferencia // pegar la url en gestor de urls adicionales "https://arduino.esp8266.com/stable/package_esp8266com_index.json" */
/* Herramientas/Gestor de tarjetas // descargar esp8266 e instalarlo   */
/*Descargar las librerias de blynk e instalarlas en arduino en Programa icluir librerias las descomprimes y las instalas 1 x 1*/
/*Herramientas y getor de placas y selecciona la placa  (NodeMCU 1.0) tambien el puerto en donde se encuentra instalada*/
/*Recomendacion instala el id de arduino y no descarges el portable ya que tendras problemas al cargar el codigo a la placa*/


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
