const int pushButtonPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(pushButtonPin, INPUT);
  Serial.begin(9600);

}


void loop() {
  // put your main code here, to run repeatedly:
   // LOW = Stop, HIGH = Go

  static int lastBtnState = LOW;
  int buttonState = digitalRead(pushButtonPin);

  int i = 0;

  if(buttonState == HIGH && lastBtnState == LOW){
    // lastBtnState = buttonState;
      Serial.println(i);
      delay(1);
      i++;
  }

  lastBtnState = buttonState;
  delay(50);

}
