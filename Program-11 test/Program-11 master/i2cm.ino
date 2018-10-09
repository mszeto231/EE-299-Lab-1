#include <Wire.h>

void setup()
{
  Wire.begin(); 				// join i2c bus (address optional for master)
  Serial.begin(9600); 			// start serial for output
}

int x = HIGH;

void loop()
{
  Wire.beginTransmission(4); 	// transmit to device #4
  // Wire.write("LED is on"); 			// sends five bytes
  Wire.write(HIGH);	
  
  Wire.endTransmission();
  delay(1000);

  Wire.beginTransmission(4);
  // Wire.write("LED is off");
  Wire.write(LOW);
  
  Wire.endTransmission();
  delay(1000);
}
