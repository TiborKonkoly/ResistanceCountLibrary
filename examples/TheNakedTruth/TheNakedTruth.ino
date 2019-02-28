// This example contains the functions which are "working-behind-the-scene" in the library.

// analog pins for reading voltages
int Vout = 5; 
int Vin = 4;


// variables for reading voltages
float voltageOut;  
float voltageIn;

// variables to hold unknown values
float Vm;  
float Rm;


// variables to hold reference values
float  Rref = 9.67; // resistance of the known resistor, measured by a multimeter
float Vref;        // we can get this value by reading it in the CountResistance function 
                   // reading it constantly provides an actual value, better than hardcode it 


float k = (5.00 / 1023.00); // constant for convertint analog values to Voltage


// functions

float readVoltage(){                  // function reads the output voltage from the voltage divider
  voltageOut = analogRead(Vout);
  Vm = voltageOut * k;

  return Vm;
}

float CountResistance(){           // function returns the value of the unknown resistor
  voltageIn = analogRead(Vin);     // in this function we read also the Vref value
  Vref = voltageIn * k;

  Rm = (Rref * Vm) / (Vref - Vm);
  
  return Rm;
}


void setup() {
  pinMode(Vout,INPUT);
  pinMode(Vin,INPUT);
  Serial.begin(9600);
}


void loop() {

float V = readVoltage();

 float R = CountResistance(); 
 
  Serial.print("The value of the unknown resistor is: ");
  Serial.print(R);
  Serial.println(" kOhm");
  delay(1000);
 

}
