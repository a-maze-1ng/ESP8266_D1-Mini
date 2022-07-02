//################################
// Define Pins
//Pinout Wemos D1 Mini: https://randomnerdtutorials.com/esp8266-pinout-reference-gpios/
int relais = 5; //D1 Pin
//################################

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(relais, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(relais, HIGH);

  delay(1000);
  digitalWrite(relais, LOW);

  delay(1000);
}
