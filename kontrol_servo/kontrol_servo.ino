#include <Servo.h>

// buat object 
Servo myServo;

// Define the servo pin
const int servoPin = 9;

// Define variables untuk posisi servo dan arah
int pos = 0;
int increment = 1;

void setup() {
  // Attach servo ke pin nya
  myServo.attach(servoPin);
}

void loop() {
  sweep();

  // set_derajat(0);
  // delay(500);
  // set_derajat(60);
  // delay(500);
  // set_derajat(90);
  // delay(500);
  // set_derajat(170);
  // delay(500);

}


void sweep(){
    // gerakan sweep dari 0 - 180 derajat
  for (pos = 0; pos <= 180; pos += increment) {
    myServo.write(pos); // Set posisi servo
    delay(15); // Delay 
  }
  
  // Reverse gerakan sweep dari 180 ke 0 derajat
  for (pos = 180; pos >= 0; pos -= increment) {
    myServo.write(pos); // Set posisi servo
    delay(15);
  }
}

void set_derajat(int sudut){
  //set posisi servo
  myServo.write(sudut);
}