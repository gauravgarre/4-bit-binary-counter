#include <math.h>

int ledPins[] = {6, 5, 4, 3, 2};
int bits = sizeof(ledPins) / sizeof(int);

void setup() {
  // put your setup code here, to run once
  for (int i = 0; i < bits; i++) {
    pinMode(ledPins[i], OUTPUT);
  }

  for (int i = 0; i < pow(2, bits) ; i++) {
    print_led(i, bits);
    delay(500);
  }
  print_led(0, bits);
}

void loop() {
  // put your main code here, to run repeatedly
  
}

void print_led(int num, int bits) {
  for(int i = 0; i < bits; i++) {
    digitalWrite(ledPins[i], (num >> i) & 0x01);
  }
}