int lightSensorPin1 = A0;
int lightSensorPin2 = A1;
int lightSensorPin3 = A2;


int isLight1Covered = 0;
int isLight2Covered = 0;
int isLight3Covered = 0;


int relayPin = 2;

//How much a sensor must be adjusted with reduction of light.
int coveringSensitivity1 = 50;
int coveringSensitivity2 = 50;
int coveringSensitivity3 = 50;


//helperFuncs

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lightSensorPin1, INPUT);
  pinMode(lightSensorPin2, INPUT);
  pinMode(lightSensorPin3, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);
  
  Serial.println("Caliobrating Starting...");
  Serial.println("Initial read for Sensor1: ");
  Serial.println(analogRead(lightSensorPin1));
  Serial.println("Initial read for Sensor2: ");
   Serial.println(analogRead(lightSensorPin2));
   Serial.println("Initial read for Sensor3: ");
   Serial.println(analogRead(lightSensorPin3));

  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  int lightReading1 = analogRead(lightSensorPin1);
  //int lightReading2 = analogRead(lightSensorPin2);
  int lightReading3 = analogRead(lightSensorPin3);

//  Serial.println(lightReading1 - coveringSensitivity1);
 //Serial.println(lightReading1); //970
 //Serial.println(lightReading2); // 1008
 //Serial.println(lightReading3); //940

  //Light One
  if(lightReading1 > 1000){
    isLight1Covered = 1;
    Serial.println("LIGHT 1 IS COVERED");
  } else {
    isLight1Covered = 0;
  }

  //Light Two - teeth
//  if((lightReading2 - calibratedDiff2) > coveringSensitivity2 ){
//    isLight2Covered = 1;
//    Serial.println("LIGHT 2 IS COVERED");
//  } else {
//    isLight2Covered = 0;
//  }

   //Light Three
  if(lightReading3 > 1000){
    isLight3Covered = 1;
    Serial.println("LIGHT 3 IS COVERED");
  } else {
    isLight3Covered = 0;
  }


  if(isLight1Covered && isLight3Covered){
    Serial.println("YOU WON!");
    digitalWrite(relayPin, HIGH);
    delay(3000);
    digitalWrite(relayPin, LOW);
    delay(5000);
  }
}
