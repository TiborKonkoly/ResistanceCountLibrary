/***************************************

Resistance counting example

The main aim of this example is to count the value of an unknown resistor. 

Description:
To do so we need a resistor, which's value is known. In our case the value of the known resistor is 9k67, 
and it is hardcoded. The resistors should wired in a voltage divider circuit and the unknown resistors position should be below 
the known one, connected to theground. To count the value of the unknown resistor we need two voltages.
One is the output voltage of the voltage divider. This voltage is written by the function 'readVoltage()'. The secont voltage is 
the input voltage to the voltage divider which is measured within the function 'CountResistance'. This function also provides the
resistance of an unknown resistor in kOhm-s. 

Functions:

* resistance.begin() - initializes the analog pins (A4 and A5) which are used in the measurement. Use it only in the 'setup()' function.

* resistance.readVoltage() - returns the output voltage from the voltage divider in V

* resistance.CountResistance() - returns the value of the unknown resistor in kOhm-s 


Created by: Tibor Konkoly
Last update: 28.2.2019 17:20

****************************************/

#include "Resistance.h"


void setup() {
  resistance.begin();
  Serial.begin(9600);
}


void loop() {

float V = resistance.readVoltage();

 float R = resistance.CountResistance(); 
 
  Serial.print("The value of the unknown resistor is: ");
  Serial.print(R);
  Serial.println(" kOhm");
  delay(1000);
 
}
