#define led 9
#define pin 8

boolean trig = true;
boolean state = true;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(pin, INPUT);
  Serial.begin(9600);
}

void loop()
{
    trig = digitalRead(pin);

    if(trig == true && state == false)
  {
    digitalWrite(led, HIGH);
    Serial.println("ON");
    state = true;
        delay(500);
  }
  else if(trig == false && state == true)
  {
    digitalWrite(led, LOW);
    Serial.println("OFF");
    state = false; 
        delay(500);
  }  
}
