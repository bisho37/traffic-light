int redLED =4;
int yellowLED =5 ;
int greenLED =6;
int buttonPin =2;

void setup()
{
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop()
{
  if(digitalRead(buttonPin)== LOW){
   digitalWrite(redLED, HIGH);
   delay(1000); 
   digitalWrite(redLED, LOW);
   digitalWrite(yellowLED, HIGH);
   delay(1000); 
   digitalWrite(yellowLED, LOW);
   digitalWrite(greenLED, HIGH);
   delay(1000);
   digitalWrite(greenLED, LOW);
 }
}