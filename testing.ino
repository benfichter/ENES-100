// Ava + Ethan
/*
Setup Functions:
- Enes100.begin(const char* teamName, byte teamType, int markerId, int roomNumber, int wifiModuleTX, int wifiModuleRX)
- ^^^ Intializes the ENES100 library and establishes communication with the vision system
- team Name: name of the team that will show up in the vision system
- team type: type of mission your team is running 
- valid mission types:  Material
- MarkerID: ID of your Areu
*/
/*
Void Loop:
void setup() {
  Serial.begin(9600);

  // Connect Wi-Fi (still works!)
  Enes100.begin("TeamName", MATERIAL, 3, 1120, WIFI_TX, WIFI_RX);
  Serial.println("Connected via Wi-Fi (no vision system)");

  
*/

void setup() {
    // establish communication (enes100.begin())
    // move()
}

void move() {
  // Tank.begin()
  // turn left or right depending on the ultrasonic sensor
  // acclerate forward
   // tank.setLeftMotorPWM(int  pwm)
   // tank.setRightMotorPWM(int pwm)
   // tank.readDistanceSensor(int sensorId) --> turn left or right 
    // stop condition (Tank.turnOffMotors())
   }
 

}

