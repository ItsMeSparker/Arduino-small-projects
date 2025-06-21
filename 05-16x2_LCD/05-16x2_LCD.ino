#include <LCD_I2C.h>

LCD_I2C lcd(0x27);

// Custom heart character
byte Music[8] = { B00001, B00011, B00101, B01001, B01001, B01011, B11011, B11000 };
byte Skull[8] = { B00000, B01110, B10101, B11011, B01110, B01110, B00000, B00000 };
byte Speaker[8] = { B00001, B00011, B01111, B01111, B01111, B00011, B00001, B00000 };



void setup() {
  lcd.begin();  // Initialize the LCD with 16 columns and 2 rows
  lcd.backlight();
  lcd.createChar(0, Music);  // Create custom character at index 0
  lcd.createChar(1, Speaker);

  //lcd.print(" Moji");

}

void loop() {
  for(int j = 0; j < 2; j++){
    if(j==0){
    for(int i = 0; i <= 16; i++){
        lcd.setCursor(i, j);
        lcd.write(byte(0));

        lcd.setCursor(16-i, j+1);
        lcd.write(byte(1));

        delay(250);
        //lcd.clear();
        }
      }
    else{
      for(int i = 16; i >= 0; i--){
        lcd.setCursor(i, j);
        lcd.write(byte(0));

        lcd.setCursor(16-i, j-1);
        lcd.write(byte(1));

        delay(250);
        //lcd.clear();
        }
      }
  }
}
