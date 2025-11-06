int ledPin = 3;

const int fotorresistorPin = A0;

void setup() {
    Serial.begin(9600);
    pinMode(ledPin,  OUTPUT);
}

void loop() {
    int value = analogRead(fotorresistorPin);

    Serial.println("Analog  Value: ");
    Serial.println(value);
    
    if (value > 100) {
        digitalWrite(ledPin, LOW);
    } else {
        digitalWrite(ledPin,  HIGH);
    }
    
    delay(250);
}
