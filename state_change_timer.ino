#include <Servo.h>
const int switchPin = 8;

int switchVal = 0;
int prevSwitchVal = 0;

Servo myservo;
//State Change 1
void setup() {
  // put your setup code here, to run once:
  pinMode(switchPin, INPUT);
  myservo.attach(10);
  myservo.write(0);

}

void loop() {
  switchVal = digitalRead(switchPin);

  if (switchVal != prevSwitchVal){
    if (switchVal == HIGH){
      myservo.write(180);
    }
  }

  prevSwitchVal = switchVal;
}
const int switchPin = 8;
unsigned long timerVal;
unsigned long currentTime;
long timerLength = 3000;

bool timer = false;
int switchVal = 0;
int prevSwitchVal = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(switchPin, INPUT);
  myservo.attach(10);
  myservo.write(0);

}

void loop() {
  currentTime = millis();
  switchVal = digitalRead(switchPin);
  
  if (switchVal != prevSwitchVal){
    if (switchVal == HIGH){
      timerVal = currentTime;
      timer = true;
    }
  }

  if (timer == true){
    if (currentTime - timerVal >= timerLength){
      myservo.write(180);
    }
  }

  prevSwitchVal = switchVal;
}
