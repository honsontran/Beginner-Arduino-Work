/*
This code is used to write one of the most basic examples used in examples, blinking an LED.

This was also rewritten/explained from the Sparkfun Inventor's Kit with my work included.

Hardware connections:
  - We are outputting 5V through pin 13 to turn an LED on/off.
  - Remember that a 330ohm resistor is required to prevene the LED from frying (:
*/

//The setup() method is where you define your fields.
void setup(){
  // There's 13 pins on an Arduino. We are using pin 13.
  //We take pin 13 and then indicate the pin is giving power.
  
  pinMode(13, OUTPUT);
}


// The loop() method is where your your program lies (or main portion of your code.
// This runs after your setup method.
void loop() {
  // The 13 digital pins on your Arduino are great at inputting
  // and outputting on/off, or "digital" signals. These signals
  // will always be either 5 Volts (which we call "HIGH"), or
  // 0 Volts (which we call "LOW").

  // Because we have an LED connected to pin 13, if we make that
  // output HIGH, the LED will get voltage and light up. If we make
  // that output LOW, the LED will have no voltage and turn off.

  // digitalWrite() is the built-in function we use to make an
  // output pin HIGH or LOW. It takes two values; a pin number,
  // followed by the word HIGH or LOW:

  digitalWrite(13, HIGH);   // Turn on the LED

  //Pause/delay the code at this point in time for this amount of milliseconds.
  delay(1000);              // 1000ms = 1 second.

  //Set the pin back to low voltage (0V).
  digitalWrite(13, LOW);    // Turn off the LED
  delay(1000);              // Pause the off for 1 second.
}
