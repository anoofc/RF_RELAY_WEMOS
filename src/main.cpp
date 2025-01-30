#define DEBUG 0

#define PIN1 D1
#define PIN2 D2      
#define PIN3 D5   
#define PIN4 D6     
#define DEBOUNCE_DELAY 500
#include <Arduino.h>

uint32_t lastDebounceTime = 0;
void setup() {
  Serial.begin(9600);
  pinMode(PIN1, INPUT_PULLUP);
  pinMode(PIN2, INPUT_PULLUP);
  pinMode(PIN3, INPUT_PULLUP);
  pinMode(PIN4, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(PIN1) == LOW) {
    if (millis() - lastDebounceTime < DEBOUNCE_DELAY) { return;}
    Serial.println('A');
    if (DEBUG) { Serial.println("Button A pressed"); }
    lastDebounceTime = millis();
  }
  if (digitalRead(PIN2) == LOW) {
    if (millis() - lastDebounceTime < DEBOUNCE_DELAY) { return;}
    Serial.println('B');
    if (DEBUG) { Serial.println("Button B pressed"); }
    lastDebounceTime = millis();
  }
  if (digitalRead(PIN3) == LOW) {
    if (millis() - lastDebounceTime < DEBOUNCE_DELAY) { return;}
    Serial.println('C');
    if (DEBUG) { Serial.println("Button C pressed"); }
    lastDebounceTime = millis();
  }
  if (digitalRead(PIN4) == LOW) {
    if (millis() - lastDebounceTime < DEBOUNCE_DELAY) { return;}
    Serial.println('D');
    if (DEBUG) { Serial.println("Button D pressed"); }
    lastDebounceTime = millis();
  }
}
