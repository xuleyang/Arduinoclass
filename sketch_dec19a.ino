#define TrigerPin 2
#define EchoPin 3
#define TrigerPin 2
#define EchoPin 3








void setup() {
  // put your setup code here, to run once:
  pinMode(TrigerPin, OUTPUT);
  pinMode(EchoPin, INPUT);
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  delay(100);

  digitalWrite(TrigerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(TrigerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigerPin, LOW);
  float v = float(pulseIn(EchoPin, HIGH) * 0.034) / 2;
  Serial.print(v);
  Serial.println("cm");
  if (v < 10) {
    digitalWrite(9, HIGH);
    digitalWrite(10,LOW);
    digitalWrite(8, LOW);
  }
  if (v>10) {
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
  }
  if (v > 20) {
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
  }
}








void setup() {
  // put your setup code here, to run once:
  pinMode(TrigerPin, OUTPUT);
  pinMode(EchoPin, INPUT);
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  delay(100);

  digitalWrite(TrigerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(TrigerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigerPin, LOW);
  float v = float(pulseIn(EchoPin, HIGH) * 0.034) / 2;
  Serial.print(v);
  Serial.println("cm");
  if (v < 10) {
    digitalWrite(9, HIGH);
    digitalWrite(10,LOW);
    digitalWrite(8, LOW);
  }
  if (v>10) {
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
  }
  if (v > 20) {
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
  }
}
