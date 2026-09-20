const int BUTTON_PIN = 2;
const int LED_PIN = 13;
int buttonState = 0;

void setup() {
  Serial.begin(9600);
  
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  buttonState = digitalRead(BUTTON_PIN);
  
  if (digitalRead(BUTTON_PIN) == HIGH) {
    digitalWrite(LED_PIN, HIGH); // Pressed
    Serial.println("Button Pressed! LED Illuminated");
  } else {
    digitalWrite(LED_PIN, LOW);
    Serial.println("Button Released. LED Dark");
  }
  delay(100);
}