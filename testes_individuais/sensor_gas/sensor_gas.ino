const int ledRed = 2;
const int ledYellow = 3;
const int ledGreen = 4;
int sensorRead;

void setup() {
	pinMode(ledRed, OUTPUT);
	pinMode(ledYellow, OUTPUT);
	pinMode(ledGreen, OUTPUT);
	Serial.begin(9600);
}

void loop() {
	sensorRead = analogRead(A1);

	Serial.print("Sensor  Value: ");
    Serial.println(sensorRead);
      
  	if(sensorRead > 240){
    	digitalWrite(ledRed, HIGH);
      	digitalWrite(ledYellow, LOW);
      	digitalWrite(ledGreen, LOW);
    }
 	else if(sensorRead > 140){
  		digitalWrite(ledRed, LOW);
      	digitalWrite(ledYellow, HIGH);
      	digitalWrite(ledGreen, LOW);
  	}
  	else{
      	digitalWrite(ledRed, LOW);
      	digitalWrite(ledYellow, LOW);
      	digitalWrite(ledGreen, HIGH);
  	}
  	
    delay(250);
}
