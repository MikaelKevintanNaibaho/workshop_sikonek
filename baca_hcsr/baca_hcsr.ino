
//set pin untuk HC-SR04 sensor
#define trigpin 2
#define echopin 3

//set global variable utuk menyimpan nilai durasi dan jarak
long durasi;
int jarak;

void setup(){
  //inisiasi komunikasi serial (serial communication)
  Serial.begin(9600);
  
  //set trigpin sebagai output
  pinMode(trigpin, OUTPUT);

  //set echopin sebagai input
  pinMode(echopin, INPUT);
}

void loop(){
  //kirim 10 microseconds pulse untuk men-trigger sensor
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);

  //hitung durasi dari echo yang ditangkap echopin
  durasi = pulseIn(echopin, HIGH);

  //hitung jarak
  jarak = durasi * 0.034 / 2;

  //tampilkan hasil jarak pada serial monitor
  Serial.print("Jarak: ");
  Serial.print(jarak);
  Serial.println(" cm");

  //tunggu 0,5 detik dulu sebelum menghitung jarak lagi
  delay(500);
}