#include <ESP8266WiFi.h>
#include <credentials.h> //include personal Wifi credentials

//################################
// Define Pins
//Pinout Wemos D1 Mini: https://randomnerdtutorials.com/esp8266-pinout-reference-gpios/
int relais = 5; //D1 Pin
int status_pir = 2; //D4 Pin
//################################
// Define variables
const long interval = 60000; //how long the relais should be at HIGH
unsigned long previousMillis = 0; //define for the loop statement
//################################

void setup() {
  // Setup serial port
  Serial.begin(115200);
  // Set relais as Output
  pinMode(relais, OUTPUT);
  // Set relais as Input
  pinMode(status_pir, INPUT);
}
 
void loop() {
unsigned long currentMillis = millis();

//################################
// PIR readout
long state = digitalRead(status_pir);
if(state == HIGH){
previousMillis = currentMillis; //save the last time movement
}
//################################
// Trigger relais if there is a movement
if (currentMillis - previousMillis >= interval) {
  Serial.println("... wait for trigger ...");
  digitalWrite(relais, LOW);
}
else {
  Serial.println("Triggered!");
  digitalWrite(relais, HIGH);
}
//################################
// Delay
delay(100);
//################################
}
