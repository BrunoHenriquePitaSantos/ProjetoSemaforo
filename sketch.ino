const int ledPins[] = {2, 4, 5, 15, 16, 17, 18};
const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);
const int espera = 800;
const int buttonPin = 34;
const int ledPin = 17;
void setup() {
  for(int i = 0; i < numLeds - 1; i ++){
    pinMode(ledPins[i], OUTPUT);
  }
  pinMode(ledPin , OUTPUT);
  pinMode(buttonPin , INPUT);
}

void loop() {
  for(int i = 0; i < numLeds; i++){
    digitalWrite(ledPins[i], HIGH);
    delay(espera);
    digitalWrite(ledPins[i], LOW);
    delay(espera);
  }
} 
  
