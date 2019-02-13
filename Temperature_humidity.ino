#include <dht.h>
#define dataPin 8 
dht DHT; 
void setup() {
  Serial.begin(9600);
}
void loop() {
  int readData = DHT.read22(dataPin); 
  float t = DHT.temperature; 
  float h = DHT.humidity; 
  
 //Print
  Serial.print("Temperature = ");
  Serial.print(t);
  Serial.print(" *C ");
  Serial.print("    Humidity = ");
  Serial.print(h);
  Serial.println(" % ");
  
  delay(2000); 
}
