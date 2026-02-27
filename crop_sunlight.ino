const int in1 = 5;
const int in2 = 6;
const int rain = 7;        
const int ledPin = 13;

int val;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(rain, INPUT);     
  pinMode(ledPin, OUTPUT);
}

void loop() {
  val = digitalRead(rain);

  if (val == HIGH) {  //it rains
    digitalWrite(in1, HIGH);  
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(in1, LOW);
  } 
  else if (val == HIGH) {  // No rain
    digitalWrite(in2, HIGH);  
    delay(1000);
    digitalWrite(in2, LOW);
    digitalWrite(ledPin, LOW);
  }

  delay(500);  
}
//if the motors spin in the opposite direction once again check the connection
