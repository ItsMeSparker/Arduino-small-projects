#include <Servo.h>
Servo servo;

int Vcc = 11;
int Laser = 5;
int rotator = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(Laser, OUTPUT);
  pinMode(Vcc, OUTPUT);
  servo.attach(rotator);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Laser, HIGH);
  digitalWrite(Vcc, HIGH);
  Serial.println("Laser_ON");

  for(int i = 15; i <= 165; i++){
    servo.write(i);
    delay(20);
  }
  for(int j = 165; j > 15; j--){
    servo.write(j);
    delay(20);
  }

}
