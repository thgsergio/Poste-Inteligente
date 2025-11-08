#define ldrPin A0
#define sensorPin A1
const int ledRed = 2;
const int ledYellow = 3;
const int ledGreen = 4;
const int lightWhite = 6;

int ldrRead, sensorRead;

void setup() {
	pinMode(ledRed, OUTPUT);
	pinMode(ledYellow, OUTPUT);
	pinMode(ledGreen, OUTPUT);
  	pinMode(lightWhite, OUTPUT);
  	pinMode(ldrPin, INPUT);
  	pinMode(sensorPin, INPUT);
	Serial.begin(9600);
}

void loop() {
    ldrRead = analogRead(ldrPin);
	sensorRead = analogRead(sensorPin);
  
    Serial.print("Fotorresistor  Value: ");
    Serial.println(ldrRead);
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
  
	if(ldrRead < 300){
    	digitalWrite(lightWhite, HIGH);
    }
	else{
    	digitalWrite(lightWhite, LOW);
    }
  
    delay(250);
}
