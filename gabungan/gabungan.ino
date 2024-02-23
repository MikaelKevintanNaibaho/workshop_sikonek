#include <Servo.h>

Servo myservo;

#define servopin 9
#define trigpin 2
#define echopin 3

long durasi;
int jarak;
int pos = 0;

void setup() {
  //inisialisasi servo pin
  myservo.attach(servopin);

  Serial.begin(9600);

  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);

  //set posisi awal servo ke 0
  myservo.write(pos);

}

void loop() {
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);

  durasi = pulseIn(echopin, HIGH);

  jarak = durasi * 0.034 / 2;

  Serial.print("Jarak: ");
  Serial.print(jarak);
  Serial.println(" cm");

  //variable untuk jarak mentrigger servo
  int trigger_pos = 20;

  if (jarak < trigger_pos){
    pos = 90;
    myservo.write(pos);
  } else{
    pos = 0;
    myservo.write(pos);
  }

  delay(500);

}
