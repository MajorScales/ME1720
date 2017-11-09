// Pargeon Davon October 10/24/2017
// A program to take no force, and start a motor. Then take a photo receptor to start a motor.

const int DIR_AA = 5; // Direction Pin 1 for motor a
const int DIR_BA = 4; // Direction pin 2 for motor a
const int PWM_A = 6;  // Power Pin for  motor a
const int DIR_AB = 8; // Direction pin 1 for motor b
const int DIR_BB = 9; // Direction pin 2 for motor b
const int PWM_B = 10; // Power pin motor b

// Sensors

const int SUN = A1; 
int BUTTON = 1; 

// Initalizing variables for sensor pins

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
  pinMode(BUTTON, INPUT); // Casues the pin in 1 to accept input 

// Sensor Pins
pinMode(SUN, INPUT);
pinMode(FORCE, INPUT);

}



void loop(){


  // put your main code here, to run repeatedly:
  // Prints out valuesa of the pins

Serial.println (analogRead(A1));
  // Pin variables initalizion

solar = analogRead(A1);
  //Drive forward speed with DIR_AA high, andDIR_BA low
 
// For when the force sensor has force less than one
  if(digitalRead BUTTON == HIGH)
  {
  digitalWrite(DIR_AA,HIGH);
  digitalWrite(DIR_BA,LOW);
  analogWrite(PWM_A, 255);

  delay(2000);

  digitalWrite(DIR_AA, LOW);
  digitalWrite(DIR_BA,LOW);
  analogWrite(PWM_A, 0);

  delay(1000);
  
    // For when the solar senosr has light greater than one
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
  
  

  

  

