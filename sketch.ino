
//RED=voltage,BLACK=GND,BLUE=INPUT

int relayPin = 7;
int buttonPin = 2;

void setup() {
  //pin configuration
  pinMode(relayPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);

  digitalWrite(relayPin, LOW);

}

void loop() {

  //cobdition for push button

  if (digitalRead(buttonPin) == LOW) {

    digitalWrite(relayPin, HIGH);

  }
  else {

    digitalWrite(relayPin, LOW);

  }

}