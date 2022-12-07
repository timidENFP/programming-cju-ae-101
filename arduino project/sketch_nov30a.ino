#include <Servo.h>
#define MINANALOG 0
#define MAXANALOG 1023
#define MINANG 0
#define MAXANG 179
int nRedPin = 2;
int nBluePin = 3;
int nGreenPin = 4;
int nWhitePin = 5;
int nPushSwPin = 6;
int nPotenpin = A0;
int nServopin = 9;
int nDelay = 20;
Servo myServol;

void setup()
{
  pinMode(nRedPin, OUTPUT);
  pinMode(nBluePin, OUTPUT);
  pinMode(nGreenPin, OUTPUT);
  pinMode(nWhitePin, OUTPUT);
  pinMode(nPushSwPin, INPUT);
  myServol.attach(nServopin);
  Serial.begin(9600);
}

void loop()
{ 
  if (digitalRead(nPushSwPin) == HIGH)
  {
    Serial.print("Switch:ON\n");
    
    int nKnobServo = analogRead(nPotenpin);
    int val = map(nKnobServo,MINANALOG,MAXANALOG, MINANG, MAXANG );
   
    myServol.write(val);
    
    digitalWrite( nRedPin, HIGH);
    Serial.print ("nRedPin : on \n");
    delay(val); 
    digitalWrite( nRedPin, LOW);
    Serial.print ("nRedPin : off \n");  
    delay(val);

    digitalWrite( nBluePin, HIGH);
    Serial.print ("nBluePin : on \n");
    delay(val);
    digitalWrite( nBluePin, LOW);
    Serial.print ("nBluePin : off \n");  
    delay(val);

    digitalWrite( nGreenPin, HIGH);
    Serial.print ("nGreenPin : on \n");
    delay(val);
    digitalWrite( nGreenPin, LOW);
    Serial.print ("nGreenPin : off \n");  
    delay(val);

    digitalWrite( nWhitePin, HIGH);
    Serial.print ("nWhitePin : on \n");
    delay(val);
    digitalWrite( nWhitePin, LOW);
    Serial.print ("nWhitePin : off \n"); 
  }
  else 
  {
    Serial. print ("Switch:off\n");
    digitalWrite( nRedPin, LOW);
    digitalWrite( nBluePin, LOW);
    digitalWrite( nGreenPin, LOW);
    digitalWrite( nWhitePin, LOW);
    
  delay(nDelay);
}
}
