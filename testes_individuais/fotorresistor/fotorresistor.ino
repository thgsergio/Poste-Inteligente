const int ledPin = 3;
int valueFotorresistor;

void setup() {
    Serial.begin(9600);
    pinMode(ledPin,  OUTPUT);
}

void loop() {
    valueFotorresistor = analogRead(A0);

    Serial.println("Fotorresistor  Value: ");
    Serial.println(valueFotorresistor);

    if (valueFotorresistor > 100) {
        digitalWrite(ledPin, LOW);
    } else {
        digitalWrite(ledPin,  HIGH);
    }
    
    delay(1000);
}
