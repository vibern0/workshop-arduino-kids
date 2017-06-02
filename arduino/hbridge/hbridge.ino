void setup() {

  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.println("Ready");

  digitalWrite( 4, LOW );
  digitalWrite( 3, HIGH );

}
