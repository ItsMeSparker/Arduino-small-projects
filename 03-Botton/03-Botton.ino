const int LEDRedpin = 4;
const int LEDYellowpin = 5;
const int LEDGreenpin = 6;
const int RedButtonPin = 8;
const int YellowButtonPin= 9;
const int GreenButtonPin = 10;
int stateRed;
int stateYellow;
int stateGreen;

void setup() {
  // put your setup code here, to run once:
  pinMode (LEDRedpin, OUTPUT);
  pinMode (LEDYellowpin, OUTPUT);
  pinMode (LEDGreenpin, OUTPUT);
  pinMode (RedButtonPin, INPUT_PULLUP);
  pinMode (YellowButtonPin, INPUT_PULLUP);
  pinMode (GreenButtonPin, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  stateRed = digitalRead(RedButtonPin);
  if (stateRed == HIGH){
    digitalWrite(LEDRedpin, LOW);
  }
  else {
    digitalWrite(LEDRedpin, HIGH);
  }
  stateYellow = digitalRead(YellowButtonPin);

  if (stateYellow == HIGH){
    digitalWrite(LEDYellowpin, LOW);
  }
  else {
    digitalWrite(LEDYellowpin, HIGH);
  }
  stateGreen = digitalRead(GreenButtonPin);

  if (stateGreen == HIGH){
    digitalWrite(LEDGreenpin, LOW);
  }
  else {
    digitalWrite(LEDGreenpin, HIGH);
  }

}
