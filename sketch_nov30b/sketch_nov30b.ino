int sensorPin = A0;    
int ledPin = 8;      
int thresholdValue = 500; 

void setup() {
  pinMode(ledPin, OUTPUT); 
}

void loop() {
  int sensorValue = analogRead(sensorPin);  

  if (sensorValue < thresholdValue) {     
    digitalWrite(ledPin, HIGH);           
  } else {                               
    digitalWrite(ledPin, LOW);           
  }
}