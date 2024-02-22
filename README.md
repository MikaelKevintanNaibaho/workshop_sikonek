# Workshop Basic Arduino UKM Robotik Sikonek

Pada workshop kali kita akan belajar mengenai basic dari arduino, mulai dari:
- Hardware
- Software dan basic programming
- Cara menggunakan sensor (sensor jarak HCSR-04 ultrasonic sensor)
- Cara mengendalikan motor (motor servo)

## Introduction Arduino dan Basic Programming

### Overview Singkat Arduino dan Kemampuannya
Arduino adalah platform elektronik Open-Source untuk hardware dan software yang mudah digunakan dan biasa digunakan untuk pembelajaran mikrokontroller dan embedded system karena simpel dan serbaguna
Terdiri Dari Programmable Circuit Board (Mikrokontroller) dan development environtment untuk menulis code dan mengupload code ke Board.

### Pinout Arduino Uno
![Alt text](images/pinout_uno.png)

1. **Pinout power:**
   ![Alt text](images/power.png)
- **Power Jack**
sebagai adapter power supply 7-12V
- **Vin**
pin untuk external power source
- **USB jack**
konek ke komputer, menyediakan 5v 500mA
- **5V dan 3v3**
menyediakan 5v dan 3,3V untuk memberi daya komponen external
- **GND**
pin GND digunakan untuk menutup rangkaian listrik

2. **Pinout Analog**
   ![Alt text](images/pinout_analog.png)
 - Arduino Uno punya 6 analog pin, sebagai **ADC**(Analog to Digital Converter).
berfungsi untuk mengubah signal analog menjadi signal digital, agar dapat dihitung oleh prosesornya untuk dapat digunakan untuk operasi.
 - Pada arduino ADC itu 10-bit. artinya merepresentasikan voltage analog menjadi 1024(2^10) dalam level digital
 - Pin analog bisa digunakan untuk membaca data sensor analog seperti sensor suhu, sensor cahaya, pontensiometer, dll.

3. **Pinout Digital**
   ![Alt text](images/pinout_digital.png)
