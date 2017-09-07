// Dual LED - Task 2

// Variables
int led_1 = 7;
int led_2 = 11;
int led_1_speed = 100;
int led_2_speed = 100;

void setup() {
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
}

void loop() {
  digitalWrite(led_1, HIGH);
  delay(led_1_speed);
  digitalWrite(led_1, LOW);
  delay(led_1_speed);
  
  digitalWrite(led_2, HIGH);
  delay(led_2_speed);
  digitalWrite(led_2, LOW);
  delay(led_2_speed);
}

