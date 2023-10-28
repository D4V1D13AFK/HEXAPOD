#include <Servo.h>

Servo pata_1;
Servo pata_2;
Servo pata_3;
Servo pata_4;
Servo pata_5;
Servo pata_6;

Servo cintura_1;
Servo cintura_2;
Servo cintura_3;
Servo cintura_4;
Servo cintura_5;
Servo cintura_6;

void setup(){

pata_1.attach(13);
cintura_1.attach(12);

pata_2.attach(11);
cintura_2.attach(10);

pata_3.attach(9);
cintura_3.attach(8);

pata_4.attach(6);
cintura_4.attach(7);

pata_5.attach(7);
cintura_5.attach(6);

pata_5.attach(5);
cintura_5.attach(4);

pata_6.attach(3);
cintura_6.attach(2);


base();
}

void loop() {
  base();
  delay(500);
  adelante_1();
  base();
  delay(500);
  adelante_2();
  delay(500);
  
}

void base(){
  pata_1.write(90);
  cintura_1.write(30);

  pata_2.write(0);
  cintura_2.write(100);

  pata_3.write(90);
  cintura_3.write(90);

  pata_4.write(0);
  cintura_4.write(60);

  pata_5.write(90);
  cintura_5.write(85);

  pata_6.write(90);
  cintura_6.write(100);
}

void adelante_1(){
  
  pata_1.write(30);
  pata_4.write(60);
  pata_5.write(125);
  delay(500);

  cintura_1.write(60);
  cintura_4.write(30);
  cintura_5.write(115);
  delay(500);

  pata_1.write(90);
  pata_4.write(0);
  pata_5.write(90);
  delay(500);
}

void adelante_2(){
  pata_2.write(60);
  pata_3.write(10);
  pata_6.write(0);
  delay(500);

  cintura_2.write(80);
  cintura_3.write(120);
  cintura_6.write(70);
  delay(500);

  pata_2.write(0);
  pata_3.write(90);
  pata_6.write(90);
  delay(500);
}

