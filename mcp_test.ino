#include <Wire.h>
#include "Adafruit_MCP23017.h"
Adafruit_MCP23017 mcp;

// ซ้ายล่างไปขวา
int pin_1 = 8;
int pin_2 = 9;
int pin_3 = 10;
int pin_4 = 11;
int pin_5 = 12;
int pin_6 = 13;
int pin_7 = 14;
int pin_8 = 15;

//ซ้ายบนไปขวา
int pin_28 = 7;
int pin_27 = 6;
int pin_26 = 5;
int pin_25 = 4;
int pin_24 = 3;
int pin_23 = 2;
int pin_22 = 1;
int pin_21 = 0;


void setup() {
  Serial.begin(115200);
  mcp.begin();
  mcp.pinMode(pin_1, INPUT); //Button 1
  mcp.pinMode(pin_2, INPUT); //Button 2
  mcp.pinMode(pin_3, OUTPUT); //status
  mcp.pinMode(pin_4, OUTPUT);
  mcp.pinMode(pin_5, OUTPUT);
  mcp.pinMode(pin_6, OUTPUT);
  mcp.pinMode(pin_7, OUTPUT);
  mcp.pinMode(pin_8, OUTPUT);
  mcp.pinMode(pin_28, INPUT); //Dip_SW 1
  mcp.pinMode(pin_27, INPUT); //Dip_SW 2
  mcp.pinMode(pin_26, INPUT); //Dip_SW 3
  mcp.pinMode(pin_25, INPUT); //Dip_SW 4
  mcp.pinMode(pin_24, INPUT); //Dip_SW 5
  mcp.pinMode(pin_23, INPUT); //Dip_SW 6
  mcp.pinMode(pin_22, INPUT); //Dip_SW 7
  mcp.pinMode(pin_21, INPUT); //Dip_SW 8
}

void loop() {
 // int val_0 =  mcp.digitalRead(pin_1); 
  Serial.print(mcp.digitalRead(pin_1));
  Serial.print(mcp.digitalRead(pin_2));
  Serial.print(mcp.digitalRead(pin_3));
  Serial.print(mcp.digitalRead(pin_28));
  Serial.print(mcp.digitalRead(pin_27));
  Serial.print(mcp.digitalRead(pin_26));
  Serial.print(mcp.digitalRead(pin_25));
  Serial.print(mcp.digitalRead(pin_24));
  Serial.print(mcp.digitalRead(pin_23));
  Serial.print(mcp.digitalRead(pin_22));
  Serial.println(mcp.digitalRead(pin_21));
  mcp.digitalWrite(pin_3,!mcp.digitalRead(pin_3));
  delay(200);
  //mcp.digitalWrite(pin_1, HIGH);
  //mcp.digitalWrite(pin_2, LOW);
  //delay(2000);
  //mcp.digitalWrite(pin_1, LOW);
  // mcp.digitalWrite(pin_2, HIGH);
  // delay(2000);
}
