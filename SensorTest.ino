/* Project: Sensing Temperature & Humidity by DHT11 sensor and sense light intensity by photocell.
 Components needed:
 Photocell (https://www.sparkfun.com/products/9088)
 10K Ohm resistor (https://www.sparkfun.com/products/8374)
 DHT11 sensor (https://www.adafruit.com/products/386)
Install the Adafruit DHT library that you can find inside the Arduino board manager.
Assemble the project:
1. Place the resistor in series with the photocell on the breadboard, next to the MKR1000 board.
2. Connect the other end of the resistor to GND on the MKR1000 board, and the other end of the
   photocell to the VCC pin of the Arduino board.
3. Connect the middle pin between the resistor and the photocell to analog pin A0 of the MKR1000.
4. Connect the DHT11 sensor - connect the first pin of the sensor to VCC, the second pin to pin ~D5
   of the Arduino board, and then the last pin of the sensor to GND.
*/
#include "DHT.h"

// Pins
int sensorPin = A0;
#define DHTPIN 5
#define DHTTYPE DHT11

// Initialize DHT sensor
DHT dht(DHTPIN, DHTTYPE, 15);

void setup() {

  // Serial port init
  Serial.begin(9600);

  // Init DHT 
  dht.begin();

}

void loop() {

  // Reading temperature and humidity
  float humidity = dht.readHumidity();
  // Read temperature as Celsius
  float temperature = dht.readTemperature();

  // Display
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  // Reading from analog photocell sensor
  int sensorValue = analogRead(sensorPin);
  float lightLevel = (sensorValue/1024.00)*100;  //scale to 10-bit resolution

  // Display
  Serial.print("Light level: ");
  Serial.print(lightLevel);
  Serial.println(" %");
  Serial.println();

  // Wait  
  delay(3000);

}
