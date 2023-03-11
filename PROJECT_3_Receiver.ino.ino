#include <Arduino.h>
#include <RH_ASK.h>
#include <SPI.h>
RH_ASK driver;
void setup(){
 Serial.begin(9600);
 driver.init();
}
void loop(){
uint16_t data;
uint8_t datalen = sizeof(data);
if(driver.recv((uint8_t*)&data, &datalen)){
 Serial.println(data);
}
}
