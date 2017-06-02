
void setup() {

  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.println("Ready");

  digitalWrite( 4, LOW );
  digitalWrite( 3, LOW );

}

void loop() {

  if(Serial.available() > 0) {
    char ch = Serial.read();

    int opt = ch - '0';

    if(opt == 0) {
      digitalWrite( 4, LOW );
      digitalWrite( 3, HIGH );
      delay(500);
      digitalWrite( 4, LOW );
      digitalWrite( 3, LOW );
    }
    else if(opt == 1) {
      digitalWrite( 4, HIGH );
      digitalWrite( 3, LOW );
      delay(500);
      digitalWrite( 4, LOW );
      digitalWrite( 3, LOW );
    }
  }


}

