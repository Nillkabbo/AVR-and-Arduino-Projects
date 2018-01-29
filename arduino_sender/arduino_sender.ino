int pushButton = 13;
 
// the setup routine runs once:
 
void setup() {
 
  // initialize serial communication at 9600 bits per second:
 
  Serial.begin(9600);
 
  // make the pushbutton’s pin an input:
 
  pinMode(pushButton, INPUT);
 
}
 
// the loop routine runs over and over again forever:
 
void loop() {
 
  // read the input pin:
 
  int buttonState = digitalRead(pushButton);
 
  // print out the state of the button:
 if(buttonState ==HIGH){
   Serial.println("H");
 
    delay(300); // delay in between reads for stability
 
  }
 
}
