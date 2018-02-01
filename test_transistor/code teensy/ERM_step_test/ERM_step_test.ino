 const int nbPins = 8;
int pins[nbPins] = {2,/*3, */4, 5, 6, 20, 21, 22, 23};
float value = 0;

void setup()
{
  for (int i = 0 ; i < nbPins ; i++) pinMode(pins[i], OUTPUT);
  Serial.begin(9600);
  delay(2000); // sanity delay
}

void loop()
{
  for (int intensity = 0 ; intensity < 4 ; intensity++) 
  {
    value = intensity*50;
    Serial.println(value);
  for (int index = 0 ; index < nbPins ; index++) 
  {
    analogWrite(pins[index], value);
  }
    delay(1000);
  }
}
