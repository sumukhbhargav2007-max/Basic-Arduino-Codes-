# include<Adafruit_GFX.h>
#include<Adafruit_SSD1306.h>
#include<Wire.h>
#include<SPI.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define SCREEN_ADDRESS 0x3C

//spi cinfiguration

#define OLED_MOSI 9
#define OLED_CLK 10
#define OLED_DC 11
#define OLED_CS 12
#define OLED_RESET_PIN 13
Adafruit_SSD1306 screen (SCREEN_WIDTH, SCREEN_HEIGHT,OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET_PIN, OLED_CS);


void setup() 
{
screen.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS);

}

void loop()
 {
  screen.clearDisplay();
  screen.setTextSize(1);
  screen.setTextColor(WHITE);  // white represents that the oled is on.
  screen.setCursor(0,0);
  screen.print("SUMUKH");
  screen.display();
  
}




/*to print the text in reverse format ...continue the same by including the next snippet..
  delay(3000);
  screen.invertDisplay(true);
  delay(3000);
  screen.invertDisplay(false);
  screen.clearDisplay();   */



/*for scrolling...
  screen.scrollingright(0,7);
  delay(4500);
  screen.stopscrolling();  
  screen.display();    */

/* https://javl.github.io/image2cpp/ 
   thismis to generate code to display on oled*/