#include <Servo.h>

#define trigPin 12
#define echoPin 13

#define motorLeft1 8
#define motorLeft2 9
#define motorRight1 10
#define motorRight2 11

Servo gripper;

long measureDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH, 30000);
  if (duration == 0) {
    return -1; // timeout
  }

  long distance = duration * 0.034 / 2;
  return distance;
}

void moveForward() {
  digitalWrite(motorLeft1, HIGH);
  digitalWrite(motorLeft2, LOW);
  digitalWrite(motorRight1, HIGH);
  digitalWrite(motorRight2, LOW);
}

void stopRobot() {
  digitalWrite(motorLeft1, LOW);
  digitalWrite(motorLeft2, LOW);
  digitalWrite(motorRight1, LOW);
  digitalWrite(motorRight2, LOW);
}

void collectObject() {
  stopRobot();

  gripper.write(30);
  delay(1500);

  gripper.write(90);
  delay(500);
}

void setup() {
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(motorLeft1, OUTPUT);
  pinMode(motorLeft2, OUTPUT);
  pinMode(motorRight1, OUTPUT);
  pinMode(motorRight2, OUTPUT);

  gripper.attach(3);
  gripper.write(90);

  Serial.println("Arduino Litter Collecting Robot Starting");
}

void loop() {
  long distance = measureDistance();

  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance > 0 && distance < 15) {
    Serial.println("Object detected. Attempting collection.");
    collectObject();
  } else {
    moveForward();
  }

  delay(100);
}
