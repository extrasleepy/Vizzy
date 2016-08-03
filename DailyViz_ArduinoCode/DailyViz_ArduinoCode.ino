
// Vizzy Arduino Code 72u Summer Session

#include "Keyboard.h"

// set pin numbers for the five buttons:
const int one = 13;
const int two = 12;
const int three = 11;
const int four = 10;
const int five = 9;
const int reset = 8;

int buttonDelay = 50;

void setup() { // initialize the buttons' inputs:
  pinMode(one, INPUT);
  pinMode(two, INPUT);
  pinMode(three, INPUT);
  pinMode(four, INPUT);
  pinMode(five, INPUT);
  pinMode(reset, INPUT);

  Serial.begin(9600);
  Keyboard.begin();
}

void loop() {
  // use the pushbuttons to control the keyboard:
  if (digitalRead(one) == HIGH) {
    delay(buttonDelay);
    if (digitalRead(one) == LOW) {
      Keyboard.write('1');
    }
  }
  else if (digitalRead(two) == HIGH) {
    delay(buttonDelay);
    if (digitalRead(two) == LOW) {
      Keyboard.write('2');
    }
  }
  else if (digitalRead(three) == HIGH) {
    delay(buttonDelay);
    if (digitalRead(three) == LOW) {
      Keyboard.write('3');
    }
  }
  else if (digitalRead(four) == HIGH) {
    delay(buttonDelay);
    if (digitalRead(four) == LOW) {
      Keyboard.write('4');
    }
  }
  else if (digitalRead(five) == HIGH) {
    delay(buttonDelay);
    if (digitalRead(five) == LOW) {
      Keyboard.write('5');
    }
  }
  else if (digitalRead(reset) == HIGH) {
    delay(buttonDelay);
    if (digitalRead(reset) == LOW) {
      Keyboard.write('0');
    }
  }
}
