void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.print("HIGH");
  Serial.println();
  delay(1000);
  
  digitalWrite(LED_BUILTIN, LOW);
  Serial.print("LOW");
  Serial.println();
  delay(1000);
}
