const pin_t My_LED = D7;

SYSTEM_THREAD(ENABLED)

void setup() {
pinMode(My_LED, OUTPUT);
}

void loop() {

    FirstNameMorse();

}

void FirstNameMorse()
{
    
    //J
    digitalWrite(My_LED, HIGH);
    delay(1s);
    digitalWrite(My_LED, LOW);
    delay(1s);
    
    digitalWrite(My_LED, HIGH);
    delay(3s);
    digitalWrite(My_LED, LOW);
    delay(1s);
    
    digitalWrite(My_LED, HIGH);
    delay(3s);
    digitalWrite(My_LED, LOW);
    delay(1s);
    
    digitalWrite(My_LED, HIGH);
    delay(3s);
    digitalWrite(My_LED, LOW);
    delay(1s);
    
    //A
     digitalWrite(My_LED, HIGH);
    delay(1s);
    digitalWrite(My_LED, LOW);
    delay(1s);
    
    digitalWrite(My_LED, HIGH);
    delay(3s);
    digitalWrite(My_LED, LOW);
    delay(1s);
    
    //K
    digitalWrite(My_LED, HIGH);
    delay(3s);
    digitalWrite(My_LED, LOW);
    delay(1s);
    
    digitalWrite(My_LED, HIGH);
    delay(1s);
    digitalWrite(My_LED, LOW);
    delay(1s);
    
    digitalWrite(My_LED, HIGH);
    delay(3s);
    digitalWrite(My_LED, LOW);
    delay(1s);
    
    //E
    digitalWrite(My_LED, HIGH);
    delay(1s);
    digitalWrite(My_LED, LOW);
    delay(1s);
    
    delay(5s);
    
}