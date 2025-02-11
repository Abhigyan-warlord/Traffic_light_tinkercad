// C++ Code
//
void setup() {
  pinMode(13, OUTPUT);  // Red LED
  pinMode(12, OUTPUT);  // Yellow LED
  pinMode(11, OUTPUT);  // Green LED
  pinMode(10, INPUT);   // Button
}

void loop(){
digitalWrite(11, HIGH);  // Normal Cycle Starts
digitalWrite(12, LOW);
digitalWrite(13, LOW);
  	for (int i = 0; i < 1000; i += 50) { //  Checks every 50ms for Button
    if (digitalRead(10) == HIGH)
      pedestrian();
    delay(100);
  	}
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
digitalWrite(13, LOW);

  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
digitalWrite(13, LOW);
  	for (int i = 0; i < 1000; i += 50) {
    if (digitalRead(10) == HIGH)
      pedestrian();
    delay(100);
  	}
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
digitalWrite(13, LOW);

  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
digitalWrite(11, LOW);
  	for (int i = 0; i < 1000; i += 50) {
    if (digitalRead(10) == HIGH)
      pedestrian();
    delay(100);
  	}
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
digitalWrite(11, LOW);
}

void pedestrian(){  //  Pedestrian case when the button is pressed
digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(5000);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
}