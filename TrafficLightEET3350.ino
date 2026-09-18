int redled1 =3;    // North-South red light
int redled2 =2;   //East-West red light
int redled3 =8;   //pedestrian crosswalk red light
int yellowled1 =5; //North-South yellow light
int yellowled2 =4; //East-West yellow light
int greenled1 =7;  //North-South green light
int greenled2 =6;  //East-West green light
int greenled3 =9;  //pedestrian crosswalk green light
int buttonPin1 =10; //pedestrian crosswalk
int buttonPin2 =11; //N-S traffic
int buttonPin3 =12; //E-W traffic
int pedButton =LOW; //pedestrian crosswalk closed by default
int sensorNS =HIGH; //N-S traffic is open by default
int sensorEW =LOW; //E-W traffic is closed by default
bool nsFlag; //state of North-South lights
bool ewFlag; //state of East-West lights
void setup()
{
pinMode(redled1, OUTPUT); 
pinMode(yellowled1, OUTPUT); 
pinMode(greenled1, OUTPUT);
pinMode(redled2, OUTPUT); 
pinMode(yellowled2, OUTPUT); 
pinMode(greenled2, OUTPUT);
pinMode(redled3, OUTPUT);
pinMode(greenled3, OUTPUT);
pinMode(pedButton, INPUT);
pinMode(sensorNS, INPUT);
pinMode(sensorEW, INPUT);
digitalWrite(greenled1, HIGH);
digitalWrite(redled2, HIGH);
digitalWrite(redled3, HIGH);
nsFlag = 1; //North-South traffic is moving by default
ewFlag = 0; //East West traffic is halted by default
}

void loop()
{
  start:
  pedButton = digitalRead(buttonPin1); // read state of pedestrian button
  sensorNS = digitalRead(buttonPin2); //North-South sensor button
  sensorEW = digitalRead(buttonPin3); //East-West sensor button
  if (sensorEW == HIGH) {             //cars approaching on E-W
    if (ewFlag == 0) {
      EWTraffic();
    }
    else{
      goto start;
    }
  } 
  else if (sensorNS == HIGH) {        //cars approaching on N-S
    if (nsFlag == 0){
      NSTraffic();
    }
    else {
      goto start;
    }
  } 
  else if(pedButton == HIGH)
  {
    PedCrossWalk();
  }
}

void NSTraffic(){
  digitalWrite(redled3, HIGH); //turn on red LED on pedestrian crosswalk;
  delay(5000);       // wait 5 seconds 
  digitalWrite(greenled2, LOW); // turn off green LED on E-W traffic
  for(int i=0;i<3;i++)      // blink yellow LED on E-W traffic 3 times
  {
    delay(500);// wait 0.5 second 
    digitalWrite(yellowled2, HIGH); // turn on yellow LED on E-W traffic
    delay(500);         // wait 0.5 second 
    digitalWrite(yellowled2, LOW); // turn off yellow LED on E-W traffic
  }
  delay(500);         // wait 0.5 second 
  digitalWrite(redled2, HIGH);// turn on red LED on E-W traffic
  digitalWrite(greenled1, HIGH);// turn on green LED on N-S traffic
  nsFlag = 1;
  ewFlag = 0;
  digitalWrite(redled1, LOW);// turn off red LED on N-S traffic
}

void EWTraffic(){
  digitalWrite(redled3, HIGH); //turn on red LED on pedestrian crosswalk;
  delay(5000);       // wait 5 seconds 
  digitalWrite(greenled1, LOW); // turn off green LED on N-S traffic
  for(int i=0;i<3;i++)      // blink yellow LED on N-S traffic 3 times
  {
    delay(500);// wait 0.5 second 
    digitalWrite(yellowled1, HIGH); // turn on yellow LED on N-S traffic
    delay(500);         // wait 0.5 second 
    digitalWrite(yellowled1, LOW); // turn off yellow LED on N-S traffic
  }
  delay(500);         // wait 0.5 second 
  digitalWrite(redled1, HIGH);// turn on red LED on N-S traffic
  digitalWrite(greenled2, HIGH);// turn on green LED on E-W traffic
  ewFlag = 1;
  nsFlag = 0;
  digitalWrite(redled2, LOW);// turn off red LED on E-W traffic
}

void PedCrossWalk(){
  if (nsFlag == 1){ //If North-South light is green
    digitalWrite(greenled1, LOW); //turn off green LED on N-S traffic
    for(int i=0;i<3;i++)      // blink yellow LED on N-S traffic 3 times
    { 
      delay(500);// wait 0.5 second 
      digitalWrite(yellowled1, HIGH); // turn on yellow LED on N-S traffic
      delay(500);         // wait 0.5 second 
      digitalWrite(yellowled1, LOW); // turn off yellow LED on N-S traffic
    }
    delay(500);         // wait 0.5 second 
    digitalWrite(redled1, HIGH);// turn on red LED on N-S traffic
  }
  else if (ewFlag == 1){ //If East-West light is green
    digitalWrite(greenled2, LOW); //turn off green LED on E-W traffic
    for(int i=0;i<3;i++)      // blink yellow LED on E-W traffic 3 times
    {
      delay(500);// wait 0.5 second 
      digitalWrite(yellowled2, HIGH); // turn on yellow LED on E-W traffic
      delay(500);         // wait 0.5 second 
      digitalWrite(yellowled2, LOW); // turn off yellow LED on E-W traffic
    }
    delay(500);         // wait 0.5 second 
    digitalWrite(redled2, HIGH);// turn on red LED on E-W traffic
  }
  digitalWrite(redled3, LOW); //turn off red LED on pedestrian crosswalk
  digitalWrite(greenled3, HIGH); //turn on green LED on pedestrian crosswalk
  delay(5000);
  for(int i=0;i<5;i++)      // blink green LED on pedestrian sidewalk 5 times
  {
    delay(500);// wait 0.5 second 
    digitalWrite(greenled3, HIGH); // turn on green LED on pedestrian crosswalk
    delay(500);         // wait 0.5 second 
    digitalWrite(greenled3, LOW); // turn off green LED on pedestrian crosswalk
  }
  pedButton =LOW;
  digitalWrite(redled3, HIGH);
  digitalWrite(redled1, LOW);
  digitalWrite(greenled1, HIGH);
  nsFlag = 1;
  ewFlag = 0; 
}
