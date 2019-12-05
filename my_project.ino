#include <LiquidCrystal.h>
#include <Servo.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);


Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 
int pos = 0;    // variable to store the servo position 
 
//int ledPin = 10;
int sensorPin = A0;
int value;

void setup()
{
Serial.begin(9600);
lcd.begin(16,2);
//pinMode(ledPin,OUTPUT);
myservo.attach(10);  // attaches the servo on pin 9 to the servo object
}
void loop() 
{
int Value = analogRead(sensorPin);
value = analogRead(A0);
lcd.print("Alcohol Lev.:");
lcd.print(value-50);
Serial.print(value);
if (value-50 > 400) 

{
    //digitalWrite(ledPin,HIGH);
     lcd.setCursor(0, 2);
     lcd.print("Alert....!!!");
    Serial.print ("Alert");
   for(pos = 0; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
  //  delay(15);                       // waits 15ms for the servo to reach the position 
  }   
  } 
  else {
      //digitalWrite(ledPin,LOW); 
      lcd.setCursor(0, 2);
      lcd.print(".....Normal.....");
      Serial.print("Normal");
    for(pos = 180; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees 
      {                                
        myservo.write(pos);              // tell servo to go to position in variable 'pos' 
       // delay(15);                       // waits 15ms for the servo to reach the position 
      } 
      }

delay(500);
lcd.clear();
}
