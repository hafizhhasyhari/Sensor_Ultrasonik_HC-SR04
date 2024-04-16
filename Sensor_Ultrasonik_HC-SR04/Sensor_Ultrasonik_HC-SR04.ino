#define pintriger 4
#define pinecho 2

void setup() {
  Serial.begin (9600);
  pinMode(pintriger, OUTPUT);
  pinMode(pinecho, INPUT);
}

void loop() {
  long durasi, jarak;
  digitalwrite(pintriger, LOW);
  delayMicroseconds(2);

  digitalwrite(pintriger, HIGH);
  delayMicroseconds(10);

  degitalWrite(pintriger, LOW);

  durasi = pulseln(pinecho, HIGH);
  jarak = (durasi/2) / 29;

  if (jarak >= 200 || jarak <= 0){
    Serial.println(jarak diluar jangkauan");
  }
  else {
    Serial.println(jarak);
     Serial.println(" cm");
  }
  delay(500);
}
