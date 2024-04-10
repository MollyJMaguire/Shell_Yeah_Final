#include <Servo.h>
const int switchPin1 = 8;

int switchVal1 = 0;
int prevSwitchVal1 = 0;

Servo myservo1;
//State Change 1
void setup() {
  // put your setup code here, to run once:
  pinMode(switchPin1, INPUT);
  myservo1.attach(10);
  myservo1.write(0);

}

void loop() {
  switchVal1 = digitalRead(switchPin1);

  if (switchVal1 != prevSwitchVal1){
    if (switchVal1 == HIGH){
      myservo1.write(180);
    }
  }

  prevSwitchVal1 = switchVal1;
}

//State Change w/timer (sword in stone)
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
