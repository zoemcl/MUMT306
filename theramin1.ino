
int pitchPin = 0;
int volumePin = 1;
int buttonPin1 = 2;
int buttonPin2 = 3;
int buttonPin3 = 4;
int switchPin = 5;
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int switchState = 0;



void setup() 
{ 
  Serial.begin( 115200 ); 
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(switchPin, INPUT);
}
 
void loop() 
{
  switchState = digitalRead(switchPin);
  if(switchState == LOW){
    Serial.print(analogRead(0));
    Serial.print(' ');
    Serial.print(analogRead(1));
    Serial.print(' ');
    buttonState1 = digitalRead(buttonPin1);
    buttonState2 = digitalRead(buttonPin2);
    buttonState3 = digitalRead(buttonPin3);
    if(buttonState1 == LOW){
      Serial.print(1);
    }
    else if(buttonState2 == LOW){
      Serial.print(2);
    }
    else if(buttonState3 == LOW){
      Serial.print(3);
    }
    else{
      Serial.print(0);
    }
 
    Serial.println();

    delay( 20 ); 

  }
  else{
    Serial.println(0);
  }
}

