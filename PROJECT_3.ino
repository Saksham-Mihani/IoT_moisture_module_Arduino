#include <RadioHead.h>
#include <radio_config_Si4460.h>
#include <RHCRC.h>
#include <RHDatagram.h>
#include <RHGenericDriver.h>
#include <RHGenericSPI.h>
#include <RHHardwareSPI.h>
#include <RHMesh.h>
#include <RHNRFSPIDriver.h>
#include <RHReliableDatagram.h>
#include <RHRouter.h>
#include <RHSoftwareSPI.h>
#include <RHSPIDriver.h>
#include <RHTcpProtocol.h>
#include <RH_ASK.h>
#include <RH_NRF24.h>
#include <RH_NRF905.h>
#include <RH_RF22.h>
#include <RH_RF24.h>
#include <RH_RF69.h>
#include <RH_RF95.h>
#include <RH_Serial.h>
#include <RH_TCP.h>
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
