// A1 = Trig, A0 = Echo, A2 = LED

bool ultrasonic_calculation(int trig, int echo) {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  long duration = pulseIn(echo, HIGH, 30000);  // 30 ms timeout
  Serial.println(duration);

  if (duration == 0) {
    return false;  // no echo, so not close
  }

  float distanceCm = (duration * 0.0343) / 2.0;
  return distanceCm < 5.0;
}

void setup() {
  Serial.begin(115200);
  pinMode(A0, INPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
}

void loop() {
  if (ultrasonic_calculation(A1, A0)) {
    digitalWrite(A2, HIGH);
  } else {
    digitalWrite(A2, LOW);
  }
  delay(60);
}