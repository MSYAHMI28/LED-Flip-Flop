// Define the pins for LEDs
const int redLedPin = 13;


// Define the timing constants
const unsigned long redInterval = 13000;   // 13 seconds in milliseconds
const unsigned long greenInterval = 21000; // 21 seconds in milliseconds
const unsigned long blueInterval = 70000;  // 70 seconds in milliseconds

unsigned long previousMillis = 0;
unsigned long previousMillisRed = 0;
unsigned long previousMillisGreen = 0;
unsigned long previousMillisBlue = 0;

void setup() {
  pinMode(redLedPin, OUTPUT);

  
}

void loop() {
  unsigned long currentMillis = millis();

  // Red LED every 13 seconds for 2 seconds
  if (currentMillis - previousMillisRed >= redInterval && currentMillis - previousMillisRed < redInterval + 2000) {
    digitalWrite(redLedPin, HIGH);
  } else {
    digitalWrite(redLedPin, LOW);
  }
  
  if (currentMillis - previousMillisRed >= redInterval + 2000) {
    previousMillisRed = currentMillis;
  }

  // Green LED every 21 seconds for 4 seconds
  if (currentMillis - previousMillisGreen >= greenInterval && currentMillis - previousMillisGreen < greenInterval + 4000) {
    digitalWrite(redLedPin, HIGH);
  } else {
    digitalWrite(redLedPin, LOW);
  }

  if (currentMillis - previousMillisGreen >= greenInterval + 4000) {
    previousMillisGreen = currentMillis;
  }

  // Blue LED every 70 seconds for 10 seconds
  if (currentMillis - previousMillisBlue >= blueInterval && currentMillis - previousMillisBlue < blueInterval + 10000) {
    digitalWrite(redLedPin, HIGH);
  } else {
    digitalWrite(redLedPin, LOW);
  }

  if (currentMillis - previousMillisBlue >= blueInterval + 10000) {
    previousMillisBlue = currentMillis;
  }
}