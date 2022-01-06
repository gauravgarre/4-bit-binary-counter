#include <math.h>

int ledPins[] = {5, 4, 3, 2}; // adjust pin numbers here
int bits = sizeof(ledPins) / sizeof(int);

void print_led(int num, int bits) {
  for(int i = 0; i < bits; i++) {
    digitalWrite(ledPins[i], (num >> i) & 0x01);
  }
}

void setup() {
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
}