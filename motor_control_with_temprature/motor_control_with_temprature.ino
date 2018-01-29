int val;
int tempPin = 1;
int motor = 13;
int ledred = 10;
int ledgreen = 11;
int ledyellow = 12;
void setup()
{
Serial.begin(9600);
pinMode(motor, OUTPUT);
pinMode(ledred, OUTPUT);
pinMode(ledgreen, OUTPUT);
pinMode(ledyellow, OUTPUT);
}
void loop()
{
val = analogRead(tempPin);
//Serial.print(val);
float mv = ( val/1024.0)*5000; 
float cel = mv/10;
//float farh = (cel*9)/5 + 32;

int decide = (int)cel;
if(decide<30){
  digitalWrite(motor, HIGH); 
  digitalWrite(ledyellow, HIGH); 
  digitalWrite(ledgreen, LOW); 
  digitalWrite(ledred, LOW); 
  Serial.print("TEMPRATURE = ");
  Serial.print(cel);
  Serial.print("*C");
  Serial.println();
  Serial.println("LOW Temprature....");

    // turn the LED on (HIGH is the voltage level)
  }else if(decide>30 && decide<50){
  digitalWrite(motor, HIGH); 
  digitalWrite(ledyellow, LOW);
  digitalWrite(ledred, LOW);  
  digitalWrite(ledgreen, HIGH); 
  Serial.print("TEMPRATURE = ");
  Serial.print(cel);
  Serial.print("*C");
  Serial.println();
  Serial.println("Normal Temrature....");
  
                    // turn the LED on (HIGH is the voltage level)
  }else if(decide >50 && decide<100){
    digitalWrite(motor, LOW);
    digitalWrite(ledgreen, LOW); 
    digitalWrite(ledyellow, LOW); 
    digitalWrite(ledred, HIGH); 
    Serial.print("TEMPRATURE = ");
    Serial.print(cel);
    Serial.print("*C");
    Serial.println();
    Serial.println("Dangerous Temprature ....");
    
                    // turn the LED on (HIGH is the voltage level)
 
  
  }
delay(1000);
/* uncomment this to get temperature in farenhite 
Serial.print("TEMPRATURE = ");
Serial.print(farh);
Serial.print("*F");
Serial.println();


*/
}
