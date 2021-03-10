#include <dht.h>

dht DHT11;

const int dhtPin=2;


void setup() {
  Serial.begin(9600);

}

void loop() {
  DHT11.read11(dhtPin);

  Serial.print("Sıcaklık Celcius: ");
  Serial.println(DHT11.temperature);

  Serial.print("Sıcaklık Kelvin: ");
  Serial.println(DHT11.temperature + 273.15);

  Serial.print("Sıcaklık Fahrenheit: ");
  Serial.println(1.80*DHT11.temperature + 32);

  Serial.print("Nem: ");
  Serial.println(DHT11.humidity);
  delay(5000);

}
