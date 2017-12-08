int led_1 = 7;
int led_1_speed = 350;

void setup() {
  pinMode(led_1, OUTPUT);
}

void loop() {
  digitalWrite(led_1, HIGH);
  delay(led_1_speed);
  digitalWrite(led_1, LOW);
  delay(led_1_speed);
}

