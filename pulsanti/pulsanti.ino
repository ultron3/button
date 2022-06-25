#include"TFT_eSPI.h"

TFT_eSPI tft;

void setup(){
  tft.begin();
  pinMode(WIO_KEY_A, INPUT_PULLUP);
  pinMode(WIO_5S_UP, INPUT_PULLUP);
  pinMode(WIO_KEY_B, INPUT_PULLUP);
  pinMode(WIO_5S_DOWN, INPUT_PULLUP);
  tft.fillScreen(0xF800);

}



void loop(){

  if ((digitalRead(WIO_KEY_A) == LOW && digitalRead(WIO_5S_UP) == LOW)) {
    tft.drawString((String)"hello", 100, 100);
    tft.setTextColor(0x0);
    tft.setTextSize(3);
  } else {
    tft.fillScreen(0xF800);
  }
  if ((digitalRead(WIO_KEY_B) == LOW && digitalRead(WIO_5S_DOWN) == LOW)) {
    tft.setTextColor(0x0);
    tft.drawString((String)"hello there", 100, 100);
    tft.setTextSize(3);
  } else {
    tft.fillScreen(0xF800);
  }

}
