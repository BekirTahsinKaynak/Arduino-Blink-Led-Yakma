
void setup() {

  pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // ledi yak
  delay(1000);                       // 1 saniye bekle
  digitalWrite(LED_BUILTIN, LOW);    // ledi söndür
  delay(1000);                       // 1 saniye bekle
}
