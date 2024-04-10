#include <Servo.h>
//SC1 :)
  const int switchPin1 = 8;
  int switchVal1 = 0;
  int prevSwitchVal1 = 0;
  Servo myservo1;
//SC2 :o
  const int switchPin2 = 10;
  int switchVal2 = 0;
  int prevSwitchVal2 = 0;
  Servo myservo2;
//SC3 >:(
  const int switchPin3 = 12;
  int switchVal3 = 0;
  int prevSwitchVal3 = 0;
  Servo myservo3;
//SCT4 ;)
  const int switchPin4 = 6;
  int switchVal4 = 0;
  int prevSwitchVal4 = 0;
  Servo myservo4;
  unsigned long timerVal;
  unsigned long currentTime;
  long timerLength = 3000;
  bool timer = false;

//State Change 1(Sword Breaks 180)
//State Change 2 (Portrait 180)
//State Change 3 (Lady Lake 90)
//State Change w/timer 4 (sword in stone 180)
void setup() {
//SC1
  pinMode(switchPin1, INPUT);
  myservo1.attach(10);
  myservo1.write(0);
//SC2
  pinMode(switchPin2, INPUT);
  myservo2.attach(10);
  myservo2.write(0);
//SC3
  pinMode(switchPin3, INPUT);
  myservo3.attach(10);
  myservo3.write(0);
//SCT4
  pinMode(switchPin4, INPUT);
  myservo4.attach(10);
  myservo4.write(0);
}

void loop() {
//SC1
  switchVal1 = digitalRead(switchPin1);
  if (switchVal1 != prevSwitchVal1){
    if (switchVal1 == HIGH){
      myservo1.write(180);
    }
  }
  prevSwitchVal1 = switchVal1;
}
//SC2
switchVal2 = digitalRead(switchPin2);
  if (switchVal2 != prevSwitchVal2){
    if (switchVal2 == HIGH){
      myservo2.write(180);
    }
  }
  prevSwitchVal2 = switchVal2;
}
//SC3
switchVal3 = digitalRead(switchPin3);
  if (switchVal3 != prevSwitchVal3){
    if (switchVal3 == HIGH){
      myservo3.write(90);
    }
  }
  prevSwitchVal3 = switchVal3;
//SCT4
  currentTime = millis();
  switchVal4 = digitalRead(switchPin4);
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
