#include <Wire.h> 
#include <Adafruit_ADS1015.h>
// a2d
//
Adafruit_ADS1115 ads1115;
void setup()
{
  int i;
  
 //set pins as outputs
 pinMode(LED_BUILTIN, OUTPUT);
// a2d
   ads1115.begin();
// ads1115.setGain(GAIN_ONE);     // 1x gain   +/- 4.096V  1 bit = 2mV
// ads1115.setGain(GAIN_TWO);     // 2x gain   +/- 2.048V  1 bit = 1mV
// ads1115.setGain(GAIN_FOUR);    // 4x gain   +/- 1.024V  1 bit = 0.5mV
 //  ads1115.setGain(GAIN_EIGHT);   // 8x gain   +/- 0.512V  1 bit = 0.25mV
 ads1115.setGain(GAIN_SIXTEEN); // 16x gain  +/- 0.256V  1 bit = 0.125mV
  Serial.begin(115200);
}
void loop()
{
int results;
    results = ads1115.readADC_Differential_0_1();
    Serial.print("Differential: "); Serial.print(results); Serial.print(" "); Serial.println(results, HEX); 
  
  delay(100);
}
