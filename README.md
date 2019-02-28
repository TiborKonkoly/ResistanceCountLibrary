# Resistance-Count-Library


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
Last update: 28.2.2019 18:10

****************************************/
