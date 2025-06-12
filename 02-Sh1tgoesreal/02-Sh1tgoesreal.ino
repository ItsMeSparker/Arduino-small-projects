int Swap = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(5, HIGH);
  digitalWrite(4, LOW);
  delay(Swap);
  digitalWrite(5, LOW);                                  
  digitalWrite(4, HIGH);
  delay(Swap);
}
