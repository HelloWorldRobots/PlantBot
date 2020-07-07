#include<dht.h>
#include <Servo.h>
dht DHT;
int pos = 0;
int SensorReading;
int tempertature;
Servo Plant;

void setup() {
  Plant.attach(3);
  

}

void loop() {
 program();
}

void program(){
 
  int SensorReading = DHT.read11(A0);
  int temperature = DHT.temperature;
  delay(2000);
 if(temperature > 18){
  delay(1500);
    for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    Plant.write(pos);              // tell servo to go to position in variable 'pos'
    delay(25);                       // waits 15ms for the servo to reach the position
  }
   for (pos = 0; pos <= 100; pos -= 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    Plant.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
    }
  }
  
  delay(8.64E+10);
  
  
 
  

}
