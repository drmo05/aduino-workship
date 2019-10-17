#include <Wire.h>

void setup() {
pinMode (3, OUTPUT);
Wire.begin(5);
Wire.onReceive(receiveEvent);
}

void loop() {
delay(100);
}

void receiveEvent(int howMany){
  int value = Wire.read();
  analogWrite (3, value);
}
