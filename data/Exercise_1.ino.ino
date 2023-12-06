// Pin number for RED LED is 19
// Pin number for GREEN LED is 8
// Pin number for BLUE LED is 5
#define RED_LED 19
#define GREEN_LED 5
#define BLUE_LED 8

void setup() {
  // put your setup code here, to run once:

  pinMode(GREEN_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
  digitalWrite(GREEN_LED, HIGH);
  delay(2000);
  digitalWrite(GREEN_LED, LOW);
  delay(1000);
  
}
