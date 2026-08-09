/*
  Project: Ultrasonic Distance Meter
  Description: Measures the distance to an object in real-time using an 
               HC-SR04 Ultrasonic Sensor and displays the output in centimeters 
               and inches on a 16x2 LCD screen using an Arduino Uno.
  
  Domain: Embedded Systems
  Date: 09/08/2026
	*/

#include <LiquidCrystal.h> 
LiquidCrystal lcd(1, 2, 4, 5, 6, 7); 
const int trigPin = 9;
const int echoPin = 10;
long duration;
int distanceCm, distanceInch;

void setup() {
	lcd.begin(16,2); 
	pinMode(trigPin, OUTPUT);
	pinMode(echoPin, INPUT);
}

void loop() {
	digitalWrite(trigPin, LOW);
	delayMicroseconds(2);
	digitalWrite(trigPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(trigPin, LOW);
	duration = pulseIn(echoPin, HIGH);
	distanceCm= duration*0.034/2;
	distanceInch = duration*0.0133/2;
	lcd.setCursor(0,0); 
	lcd.print("Distance: "); 
	lcd.print(distanceCm); 
	lcd.print(" cm");
	delay(10);
	lcd.setCursor(0,1);
	lcd.print("Distance: ");
	lcd.print(distanceInch);
	lcd.print(" inch");
	delay(10);
}
