const int LeftMotorPin1 = 13;
const int LeftMotorPin2 = 12;

const int RightMotorPin1 = 3;
const int RightMotorPin2 = 2;

const int trigPin = 7;
const int echoPin = 4;
int lastDistance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(LeftMotorPin1, OUTPUT);
  pinMode(LeftMotorPin2, OUTPUT);
  pinMode(RightMotorPin1, OUTPUT);
  pinMode(RightMotorPin2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  ShootDemRays();
 
  
  // 3. Read the echo
  long duration = pulseIn(echoPin, HIGH);
  
  // 4. Check for hardware timeouts
  if (duration == 0) {
    Serial.println("Error: No pulse received");
  } else {
    // 5. Calculate distance in cm
    int distance = (duration * 0.0343) / 2;
    if(distance < 200)
    {
      Serial.print("Real Distance: ");
      Serial.print(distance);
      Serial.println(" cm");
    }

    
    if(distance < 25)
    {
      STOP();
      delay(300);
      moveBackward();
      delay(1000);
      TurnLeft();
      delay(1200);
      STOP();
      



    }
    else{
      moveForward();
    }
    

   
   
  }

  // 6. Crucial Timing: Wait 100ms before firing again
  // (This stays OUTSIDE the if/else block!)
  delay(100); 
}

void ShootDemRays()
{
     // 1. Clear the trigger pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  // 2. Fire the 10-microsecond pulse
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
}
void moveForward(){
  digitalWrite(LeftMotorPin1, HIGH);
  digitalWrite(LeftMotorPin2, LOW);

  digitalWrite(RightMotorPin1, HIGH);
  digitalWrite(RightMotorPin2, LOW);


}

void moveBackward(){
  digitalWrite(LeftMotorPin1, LOW);
  digitalWrite(LeftMotorPin2, HIGH);

  digitalWrite(RightMotorPin1, LOW);
  digitalWrite(RightMotorPin2, HIGH);
  
}
void STOP(){
  digitalWrite(LeftMotorPin1, LOW);
  digitalWrite(LeftMotorPin2, LOW);

  digitalWrite(RightMotorPin1, LOW);
  digitalWrite(RightMotorPin2, LOW);
  
}
void TurnLeft(){
  digitalWrite(RightMotorPin1, HIGH);
  digitalWrite(RightMotorPin2, LOW);

  digitalWrite(LeftMotorPin1, LOW);
  digitalWrite(LeftMotorPin2, HIGH);
}
void TurnRight(){
  digitalWrite(RightMotorPin1, LOW);
  digitalWrite(RightMotorPin2, HIGH);

  digitalWrite(LeftMotorPin1, HIGH);
  digitalWrite(LeftMotorPin2, LOW);
}