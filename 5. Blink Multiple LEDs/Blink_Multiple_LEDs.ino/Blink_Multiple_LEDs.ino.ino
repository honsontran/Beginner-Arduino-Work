/* Rewritten from Sparkfun Inventor's Kit.
Hardware connections:
  We are going to make 8 LEDs blink on and off in certain patterns.
*/

//Define fields
int ledPins[] = {2,3,4,5,6,7,8,9};
//In this array, we have 8 LEDs, and we indicate which pin they are referring to in order.


void setup()
{
  //Make a for loop to turn on all pins.
  for(int index = 0; index <= 7; index++)
  {
    pinMode(ledPins[index],OUTPUT);
  }
}

//Loop through any methods that you have indicated below.
void loop()
{
  //You can call any method (pattern) you want from the methods below and uncomment them for use.
  
  //oneAfterAnotherLoop();    // Turn on each LED, one at a time.
    
  //oneOnAtATime();         // Turn on/off one LED at a time.

  //pingPong();             // Light the LEDs middle to the edges

  //marquee();              // Chase lights like you see on signs

  randomLED();            // Blink LEDs randomly
}

//This method will light on each LED & then turn off each LED one at a time.
void oneAfterAnotherLoop()
{
  int delayTime = 100; // milliseconds to pause between LEDs
                       // make this smaller for faster switching

   // Loop & turn on all LEDs.
  for(int index = 0; index <= 7; index++)
  {
    digitalWrite(ledPins[index], HIGH);
    delay(delayTime);                
  }                                  

   // Loop & turn off all LEDs.
  for(int index = 7; index >= 0; index--)
  {
    digitalWrite(ledPins[index], LOW);
    delay(delayTime);
  }               
}

// This method will light on an LED and turn it off for each LED.
void oneOnAtATime()
{
  int delayTime = 100; // milliseconds to pause between LEDs

  // Loop through each LED. Turn it on and then off.
  for(int index = 0; index <= 7; index++)
  {
    digitalWrite(ledPins[index], HIGH);  // turn LED on
    delay(delayTime);                    // pause to slow down
    digitalWrite(ledPins[index], LOW);   // turn LED off
  }
}

// Go through the array to the end LED and then back, creating a ping-poing effect.
void pingPong()
{
  int delayTime = 100; // milliseconds to pause between LEDs

  //Go through each LED forwards with a loop.
  for(int index = 0; index <= 7; index++)
  {
    digitalWrite(ledPins[index], HIGH);  // turn LED on
    delay(delayTime);                    // pause to slow down
    digitalWrite(ledPins[index], LOW);   // turn LED off
  }

  // Go through each LED backwards with a loop.
  for(int index = 7; index >= 0; index--)
  {
    digitalWrite(ledPins[index], HIGH);  // turn LED on
    delay(delayTime);                    // pause to slow down
    digitalWrite(ledPins[index], LOW);   // turn LED off
  }
}


// Mimics "chase lights" like the signs.
void marquee()
{
  int delayTime = 200; // milliseconds to pause between LEDs

  // Loop through the first 4 LEDs, and then skip 4 and light up that one to make it seem like
  // it's chasing lights.
  for(int index = 0; index <= 3; index++) // Step from 0 to 3
  {
    digitalWrite(ledPins[index], HIGH);    // Turn a LED on
    digitalWrite(ledPins[index+4], HIGH);  // Skip four, and turn that LED on
    delay(delayTime);                      // Pause to slow down the sequence
    digitalWrite(ledPins[index], LOW);     // Turn the LED off
    digitalWrite(ledPins[index+4], LOW);   // Skip four, and turn that LED off
  }
}

// Lights up a random LED everytime.
void randomLED()
{
  int index = random(8);  // pick a random number between 0 and 7
  int delayTime = 100;
	
  digitalWrite(ledPins[index], HIGH);  // turn LED on
  delay(delayTime);                    // pause to slow down
  digitalWrite(ledPins[index], LOW);   // turn LED off
}

