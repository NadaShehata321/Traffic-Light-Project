#include <Arduino.h>
#line 1 "C:\\Users\\nadan\\Documents\\Arduino\\sketch_dec09a\\sketch_dec09a.ino"

int d=1000;
#line 3 "C:\\Users\\nadan\\Documents\\Arduino\\sketch_dec09a\\sketch_dec09a.ino"
void setup();
#line 10 "C:\\Users\\nadan\\Documents\\Arduino\\sketch_dec09a\\sketch_dec09a.ino"
void loop();
#line 3 "C:\\Users\\nadan\\Documents\\Arduino\\sketch_dec09a\\sketch_dec09a.ino"
void setup() {

  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  digitalWrite(13,HIGH);
  delay(d);
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  delay(d/4);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  delay(d);
  digitalWrite(11,LOW);

}

