const int greenLEDPin = 9;
const int redLEDPin = 10;
const int blueLEDPin = 11;

const int greenSensorPin = A0;
const int redSensorPin = A1;
const int blueSensorPin = A2;

int greenValue = 0;
int redValue = 0;
int blueValue = 0;

int greenSensorValue = 0;
int redSensorValue = 0;
int blueSensorValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(greenLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);

}

void loop() {
  greenSensorValue = analogRead(greenSensorPin);
  delay(5);
  redSensorValue = analogRead(redSensorPin);
  delay(5);
  blueSensorValue = analogRead(blueSensorPin);
  delay(500);

  Serial.print("Raw sensor values \t Green: ");
  Serial.print(greenSensorValue);
  Serial.print("\t Red: ");
  Serial.print(redSensorValue);
  Serial.print("\t Blue: ");
  Serial.println(blueSensorValue);

  greenValue = greenSensorValue / 4;
  redValue = redSensorValue / 4;
  blueValue = blueSensorValue / 4;

  Serial.print("Mapped sensor values \t Green: ");
  Serial.print(greenValue);
  Serial.print("\t Red: ");
  Serial.print(redValue);
  Serial.print("\t Blue: ");
  Serial.println(blueValue);

  analogWrite(greenLEDPin, greenValue);
  analogWrite(redLEDPin, redValue);
  analogWrite(blueLEDPin, blueValue);


}
