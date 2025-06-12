//My First Program

  int delayTime1 = 500;
  int delayTime2 = 250;

void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (5, HIGH);
  delay(delayTime1);
  digitalWrite (5, LOW);
  delay(delayTime2);
}
