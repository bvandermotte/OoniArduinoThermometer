#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "max6675.h"
#include "Arduino.h"

/*TEMP*/
int soPin = 12;// SO=Serial Out
int csPin = 11;// CS = chip select CS pin
int sckPin = 10;// SCK = Serial Clock pin
MAX6675 Module(sckPin, csPin, soPin);// create instance object of MAX6675

/*SCREEN*/
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
// The pins for I2C are defined by the Wire-library. 
// On an arduino UNO:       A4(SDA), A5(SCL)
// On an arduino MEGA 2560: 20(SDA), 21(SCL)
// On an arduino LEONARDO:   2(SDA),  3(SCL), ...
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C ///0x3D for 128x64, 0x3C for 128x32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

//sets the arduino up
void setup() {
  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }
  
  // Clear the buffer
  display.clearDisplay();

  //Serial.begin(9600); -> if you want to send the info to the serial uncomment this line
}

//Loops forever
void loop() {

  String degres = String(Module.readCelsius())+ " C";
  drawchar(degres);

  //Serial.print(degres); -> if you want to send the info to the serial uncomment this line
}

//Function to draw a string on the screen
void drawchar(String text) {
  display.clearDisplay();

  display.setTextSize(2);               // Normal 1:1 pixel scale
  display.setTextColor(SSD1306_WHITE);  // Draw white text
  display.setCursor(0, 0);              // Start at top-left corner
  display.cp437(true);                  // Use full 256 char 'Code Page 437' font

  for(int16_t i=0; i < sizeof(text) + 1; i++) {
    display.write(text[i]);
  }

  display.display();
  
  //Delay to refresh the screen
  delay(2000);
}
