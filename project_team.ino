// Pargeon Davon October 10/24/2017
// A program to take no force, and start a motor. Then take a photo receptor to start a motor.

const int DIR_AA = 5;
const int DIR_BA = 4;
const int PWM_A = 6;
const int DIR_AB = 8;
const int DIR_BB = 9;
const int PWM_B = 10;

// Sensors

const int SUN = A1;
const int FORCE = A0;
int force = 0;
int solar = 0;

// Variables



void setup() {
  // put your setup code here, to run once:
// set pins for motor as output
Serial.begin(9600);


// Motor Pins
pinMode(DIR_AA, OUTPUT);
pinMode (DIR_BA, OUTPUT);
pinMode(PWM_A, OUTPUT);
pinMode(DIR_AB, OUTPUT);
pinMode(DIR_BB, OUTPUT);
pinMode(PWM_B, OUTPUT);

// Sensor Pins
pinMode(SUN, INPUT);
pinMode(FORCE, INPUT);

}



void loop(){


  // put your main code here, to run repeatedly:
Serial.println (analogRead(A0));
Serial.println (analogRead(A1));
force = analogRead(A0);
solar = analogRead(A1);
  //Drive forward speed with DIR_AA high, andDIR_BA low
 

  if(force < 1)
  {
  digitalWrite(DIR_AA,HIGH);
  digitalWrite(DIR_BA,LOW);
  analogWrite(PWM_A, 255);

  delay(1000);

  digitalWrite(DIR_AA, LOW);
  digitalWrite(DIR_BA,LOW);
  analogWrite(PWM_A, 0);

  delay(1000);
  
  if(solar>1)
 digitalWrite(DIR_AB,HIGH); 
  digitalWrite(DIR_BB, LOW);
  analogWrite(PWM_B, 255);

  delay(1000);

  digitalWrite(DIR_AB, LOW);
  digitalWrite(DIR_BB,LOW);
  analogWrite(PWM_B, 0);

  delay(1000);
  }
  }
  }
  
  

  

  

