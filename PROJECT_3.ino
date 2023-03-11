#include <RH_ASK.h> // Include RadioHead Amplitude Shift Keying Library
#include <SPI.h> // Include dependant SPI Library
int state = 0;
// Create Amplitude Shift Keying Object
RH_ASK driver;
//int msensor = A1;
//int msvalue = 0;
//int led = 13;
void setup() {
Serial.begin(9600);
//pinMode(msensor,INPUT);
//pinMode(led,OUTPUT);
driver.init();
Serial.begin(9600);
}

void loop() {
//msvalue = analogRead(msensor);
//Serial.println(msvalue);
 uint16_t data = 100;
 driver.send((uint8_t *)&data, sizeof(data));
 driver.waitPacketSent();
 delay(200);
{
}
}
