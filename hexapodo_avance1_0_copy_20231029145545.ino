#include <Servo.h>

//creación de los objetos servo
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

int val = " ";

void setup() {


  Serial.begin(9600);

  //pines de los servos
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
  //condiciones de movimiento
  if (Serial.available() > 0) {
    val = Serial.read();

    if (val == 'F') {
      while (true){
      val = " ";
      forward();
      val = Serial.read();
      if (val == 'T'){
        base();
        break;
      }
      }
    }

    if (val == 'B') {
      back();
    }
    if (val == 'L') {
      left();
    }
    if (val == 'R') {
      right();
    }
   if (val == 'T') {
      base();
    }
    else{
      base();
    }
  }
}

//crear movimientos

void base() {
  pata_1.write(90);
  cintura_1.write(50);

  pata_2.write(0);
  cintura_2.write(70);

  pata_3.write(90);
  cintura_3.write(90);

  pata_4.write(0);
  cintura_4.write(60);

  pata_5.write(90);
  cintura_5.write(55);

  pata_6.write(90);
  cintura_6.write(135);
}

void adelante_1() {
  pata_1.write(30);
  pata_4.write(60);
  pata_5.write(150);
  delay(200);

  cintura_1.write(85);
  cintura_4.write(30);
  cintura_5.write(115);
  delay(200);

  pata_1.write(90);
  pata_4.write(0);
  pata_5.write(90);
  delay(200);
}

void adelante_2() {
  pata_2.write(60);
  pata_3.write(30);
  pata_6.write(30);
  delay(200);

  cintura_2.write(35);
  cintura_3.write(120);
  cintura_6.write(75);
  delay(200);

  pata_2.write(0);
  pata_3.write(90);
  pata_6.write(90);
  delay(200);
}

void atras_1() {
}
void atras_2() {
}

//indicaciones bluetooth

void forward() {
    base();
    delay(10);
    adelante_1();
    base();
    adelante_2();
    delay(10);
}

void back() {
  base();
  delay(10);
  atras_1();
  base();
  delay(10);
  atras_2();
  delay(10);
}

void left() {
}

void right() {
}