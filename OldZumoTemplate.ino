#include <ZumoShield.h>

ZumoMotors motors;
void setup() {
  // put your setup code here, to run once:
  motors.setLeftSpeed(0);
  motors.setRightSpeed(0);

  //Activity 1: Change the speeds to make the robot drive straight for 2 seconds
  //Measure the distance travelled to determine a speed, so that distances can be converted into time
  goForward(2, 200, 200);

  //Activity 2: Uncomment the turnRobotRight(0.5) command and adjust the time value to make the zumobot turn right for 90 degrees
  //turnRobotRight(0.5, 200, -200);

  //Add on goForward(), turnLeft(), and turnRight() commands here to get the zumobot to navigate the maze

  //stopping the robot
  stopRobot(0.01);
}

void loop() {
  // put your main code here, to run repeatedly:

}

//method to make the robot drive forward (delayTime is in seconds)
void goForward(double delayTime, double leftPower, double rightPower) {
  motors.setLeftSpeed(leftPower);
  motors.setRightSpeed(rightPower);
  delay(delayTime*1000.0);
}

//method to make the robot turn left/counterclockwise (delayTime is in seconds)
void turnRobotLeft(double delayTime, double leftPower, double rightPower) {
  motors.setLeftSpeed(leftPower);
  motors.setRightSpeed(rightPower);
  delay(delayTime*1000.0);
}

//method to make the robot turn right/clockwise (delayTime is in seconds)
void turnRobotRight(double delayTime, double leftPower, double rightPower) {
  motors.setLeftSpeed(leftPower);
  motors.setRightSpeed(rightPower);
  delay(delayTime*1000.0);
}

//method to make the robot stop (delayTime is in seconds)
void stopRobot(double delayTime) {
  motors.setLeftSpeed(0);
  motors.setRightSpeed(0);
  delay(delayTime*1000.0);
}
