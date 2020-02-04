int pirpin = 3;// PIR Sensor is attached to pin 3
int buzzerpin =13;// Buzzer is attached to pin 13
int button;
int buttonState;

void setup() {
  Serial.begin(9600);
  pinMode(pirpin, INPUT);
  pinMode(buzzerpin, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  int s = digitalRead(pirpin);
  
  digitalWrite(buzzerpin, s);

  buttonState = digitalRead(pirpin);


  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {    
    digitalWrite(button, LOW);
    pirpin=LOW;//Assign Pir Sensor Pin to LOW
    }     
     
  
}
  
