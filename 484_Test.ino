const int RELAY_PIN = 20;
void setup() {
  // put your setup code here, to run once:
  //Setup Interupt Pins
  pinMode(RELAY_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(digitalRead(RELAY_PIN));
}

void wheelEncoder(){
  //Add wheel encoders
  int update;
  int previous;
  int count; 
  
}
