/*
  First Sketch - Blink

  Try out
  1. Blink GREEN LED ON for 2s and then OFF for 1s
  2. Make RED/BLUE/GREEN LEDs blink sequentially every 1s 
     RED_ON---RED_OFF---BLUE_ON---BLUE_OFF---GREEN_ON---GREEN_OFF---RED_ON--...
     (Need to initialize all LED pins as digital output pins) 
  
  Hardware Required: CyberSens-EDU
  Select board as CC3200-LAUNCHXL (80MHz) 
  work for energia-1.8.10E23 (suggested); energia-0101E0017
  by Dr. Bai 06/28/2023
*/

// EDU has three RED/GREEN/BLUE LEDs
// Pin number for RED LED is 19
// Pin number for GREEN LED is 8
// Pin number for BLUE LED is 5
// Check CC3200 LaunchPad on energia.nu for More about pin numbers

// Define the LED digital pin number
#define LED 19
 
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(LED, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(LED, LOW);     // turn the LED on (Why? check EDU schematics)
  delay(1000);                // wait for a second
  digitalWrite(LED, HIGH);    // turn the LED off (no current)
  delay(1000);                // wait for a second
}
