/*
This was also rewritten/explained from the Sparkfun Inventor's Kit with my work included.

Hardware explanation:
We're going to be using a potentiomter, which is an analog signal
instead of a digital signal.

Since it is analog, it doesn't output either 0V for low or 5V for high,
but it actually can output a range from 0V - 5V.

We're going to use the potentiometer to control the speed
an LED blinks on the circuit.
*/

//Let's define our fields.
int sensorPin = 0;    // The potentiometer is connected to analog pin 0
                      
int ledPin = 13;      // The LED is connected to digital pin 13

//Let's make our setup method.
void setup(
{
  pinMode(ledPin, OUTPUT); // We declared ledPin is pin 13.
                           // We can use it as a variable here.
                           
  // Sensor pin not needed to be mentioned because it's an
  // analog signal. Analog signals are already input signals,
  // therefore, there is no need to mention them at setup.
}

//Make our loop() method.
void loop()
{
  // Create a variable inside this method to store the voltage of pot.
  // analogRead() is a method in Arduino library that reads the analog
  // signal and then converts it to a number.
  // 0(0V) - 1023(5V).
  int sensorValue = analogRead(sensorPin); //sensorPin = pin 13 

  //Use the sensorValue to be the delay.
  digitalWrite(ledPin, HIGH);     // Turn the LED on
  delay(sensorValue);             // Pause for x milliseconds.
  
  digitalWrite(ledPin, LOW);      // Turn the LED off
  delay(sensorValue);             // Pause for x milliseconds.
}

