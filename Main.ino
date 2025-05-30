int buzzer = 8;
int minutes = 1;  // Change this value to set different time
unsigned long duration = minutes * 60UL * 1000;

void setup() {
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  Serial.println("Timer started...");
  delay(duration);
  digitalWrite(buzzer, HIGH);
  delay(1000);
  digitalWrite(buzzer, LOW);
  Serial.println("Time's up!");
}

void loop() {
  // Nothing in loop
}
