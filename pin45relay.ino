int RelayOne=45;

void setup() {
  // put your setup code here, to run once:
    Serial.begin(115200);
    pinMode(RelayOne, OUTPUT);
    digitalWrite(RelayOne,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(RelayOne,HIGH);
    Serial.println("High");
    delay(1000);
        digitalWrite(RelayOne,LOW);
    Serial.println("Low");
    delay(1000);    
}
