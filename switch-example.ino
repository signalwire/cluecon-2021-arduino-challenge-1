/*
  Cluecon Challenge 1

*/

const int buttonPin = 2;
int button = 0;
int lastState = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  while (!Serial); // wait until serial is established
  
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  
}

// loop will .. well loop over and over executing polling of sensors
void loop() {

  bool buttonState = digitalRead(buttonPin);
  
  if (buttonState == LOW) // Pressed
  {
    if(lastState==1){
      digitalWrite(LED_BUILTIN, 0);
      Serial.println("LED OFF");
      lastState = 0;
    }else{
      digitalWrite(LED_BUILTIN, 1);
      Serial.println("LED ON");
      lastState = 1;
    }
    delay(500); // wait 500ms
  } 
}
