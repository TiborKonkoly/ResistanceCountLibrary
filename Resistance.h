/***************************************

Resistance counting library

This is an independent library which was created within an assignment from the subject Microcontrollers and Microprocessor Technology
at the Slovak University of Technology at Bratislava. 

The main aim of this library is to count the value of an unknown resistor. To do so we need a resistor, which's value is known. 
In our case the value of the known resistor is 9k67, and it is hardcoded. The resistors should make a voltage divider and the 
unknown resistor should be below the known connected to theground. To count the value of the unknown resistor we need two voltages.
One is the output voltage of the voltage divider. This voltage is written by the function 'readVoltage()'. The secont voltage is 
the input voltage to the voltage divider which is measured within the function 'CountResistance'. This function also provides the
resistance of an unknown resistor in kOhm-s. 

Created by: Tibor Konkoly
Last update: 28.2.2019 17:20

****************************************/

#ifndef RESISTANCE_H_
#define RESISTANCE_H_

 #if (ARDUINO >= 100)  // Libraries don't include this, normal Arduino sketches do
 #include "Arduino.h" // For new Arduino IDE
#else
 #include "WProgram.h" // For old Arduino IDE
#endif  


#define VOUT_PIN 5              // analog pin for reading output voltage from the voltage divider
#define VIN_PIN 4               // analog pin for reading input voltage to the circuit (should be ~5V)
#define Rref 9.67           // the value of the known resistor, measured by multimeter
#define k 0.004887585533          // k is a constant for converting analog values into Voltage

class ResistanceClass{
  
 public:
  void  begin(void);           // this function initializes the two analog pins which are required in the measurement
  float readVoltage();         // this function returns the output voltage of the voltage divider
  float CountResistance();     // this function returns the resistance of the unknown resistor

  
  // varibles used in the functions
  private:
float _voltageOut;  
float _voltageIn;
float _Vm;  
float _Rm;
float _Vref;

}; // end of the Model class


extern ResistanceClass resistance; // Declare external instance

#endif
