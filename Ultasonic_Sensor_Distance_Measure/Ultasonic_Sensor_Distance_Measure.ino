
#define trigPin 10
#define echoPin 13
#define alermPin 6
float duration, distance;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(alermPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration = pulseIn(echoPin,HIGH);

  distance = (duration/2)*0.0343;

  Serial.print("Distance = ");
  if(distance >= 400 || distance <= 2){
    Serial.println("Out of range");
  }
  else{
    Serial.print(distance);
    Serial.println(" cm");
    delay(500);
    if(distance>=2 && distance<=25){
      digitalWrite(alermPin,HIGH);
      }else{
        digitalWrite(alermPin,LOW);
        }
  }
  delay(100);
}
