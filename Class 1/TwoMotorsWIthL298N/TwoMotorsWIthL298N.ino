// External battery needed to power motors.
// Common ground is needed

int motor1pin1 = 2;
int motor1pin2 = 3;

int motor2pin1 = 4;
int motor2pin2 = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
// PMW TO MODERATE SPEED
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:   
  // TO NOTICE SPEED IN A MORE VISUAL WAY
  analogWrite(9,250);
  analogWrite(10,250);
  //HIGH HIGH
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);

  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
  delay(1000);
// TO NOTICE SPEED IN A MORE VISUAL WAY
  analogWrite(9,50);
  analogWrite(10,50);  
// LOW LOW 
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);

  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);
  delay(1000);
// HIGH LOW
// TO NOTICE SPEED IN A MORE VISUAL WAY
  analogWrite(9,250);
  analogWrite(10,50);

  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);

  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);
  delay(1000);
//LOW HIGH
// TO NOTICE SPEED IN A MORE VISUAL WAY
  analogWrite(9,50);
  analogWrite(10,250);

  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);

  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
  delay(1000);
}