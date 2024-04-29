#include <Servo.h>
//Once Upon an Arduino : Tale of King Arthur
//Team: Shell Yeah
//By: Xinyue Yu and Molly Maguire

/*I commented out the first state change but all the comments can
apply to the other three state change code blocks*/

//BLACK - State Change 1(Sword Breaks 180)
//WHITE - State Change 2 (Portrait 180)
//GREEN - State Change 3 (Lady Lake 90)
//YELLOW - State Change 4 (sword in stone 180)
//SC1 :)
  const int switchPin1 = 12; // Button pin number
  int switchVal1 = 0;   
  int prevSwitchVal1 = 0;
  Servo myservo1;   //establishes servo object
//SC2 :o
  const int switchPin2 = 10;
  int switchVal2 = 0;
  int prevSwitchVal2 = 0;
  Servo myservo2;
 
//SC3 >:(
  const int switchPin3 = 5;
  int switchVal3 = 0;
  int prevSwitchVal3 = 0;
  Servo myservo3;

//ST4 ;)
  const int switchPin4 = 2;
  int switchVal4 = 0;
  int prevSwitchVal4 = 0;
  Servo myservo4;

void setup() {
//SC1
  pinMode(switchPin1, INPUT);
  myservo1.attach(13); //servo pin number, one off from matching button pin number
  myservo1.write(0);   //initial angle of the servo 
//SC2
  pinMode(switchPin2, INPUT);
  myservo2.attach(9);
  myservo2.write(0);
//SC3
  pinMode(switchPin3, INPUT);
  myservo3.attach(6);
  myservo3.write(30);
//ST4
  pinMode(switchPin4, INPUT);
  myservo4.attach(3);
  myservo4.write(0);
}

void loop(){
//SC1
  switchVal1 = digitalRead(switchPin1);
  if (switchVal1 != prevSwitchVal1){
    if (switchVal1 == HIGH){   //if the "button" is pressed (copper tape circut completed)
      myservo1.write(180);     // the servo will turn 180 degrees
    }
  }
  prevSwitchVal1 = switchVal1;

//SC2
  switchVal2 = digitalRead(switchPin2);
    if (switchVal2 != prevSwitchVal2){
      if (switchVal2 == HIGH){
        myservo2.write(180);
      }
    }
    prevSwitchVal2 = switchVal2;

//SC3
  switchVal3 = digitalRead(switchPin3);
  if (switchVal3 != prevSwitchVal3){
    if (switchVal3 == HIGH){
      myservo3.write(130);
    }
  }
  prevSwitchVal3 = switchVal3;
  
//ST4
  switchVal4 = digitalRead(switchPin4);
  if (switchVal4 != prevSwitchVal4){
    if (switchVal4 == HIGH){
      myservo4.write(180);
    }
  }
}



