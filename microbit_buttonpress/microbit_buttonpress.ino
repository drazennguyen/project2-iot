const int buttonA = 5;     // the number of the pushbutton pin
const int buttonB = 11;     // the number of the pushbutton pin

int buttonStateA = 0;
int lastButtonStateA = 0;
int buttonStateB = 0;
int lastButtonStateB = 0;

void setup()
{
  pinMode(buttonA, INPUT_PULLUP); // Push Button with pull-up
  pinMode(buttonB, INPUT_PULLUP); // Push Button with pull-up

  Serial.begin(9600);
}


void loop()
{
  buttonStateA = digitalRead(buttonA);
  buttonStateB = digitalRead(buttonB);


  if (buttonStateA != lastButtonStateA)
  {
    if (buttonStateA == HIGH)
    {
      Serial.println("1");    
    }
    
    delay(50); // Delay a little bit to avoid bouncing
  }
  lastButtonStateA = buttonStateA;

  if (buttonStateB != lastButtonStateB)
  {
    if (buttonStateB == HIGH)
    {
      Serial.println("0");    
    }
    
    delay(50); // Delay a little bit to avoid bouncing
  }
  lastButtonStateB = buttonStateB;

}
