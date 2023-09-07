#define led 10 //จะ set ขาหลอดไฟ เซ็ดตรงนี้
int numberin = 0;
String datain = ""; 

void setup() {
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
  Serial.begin(9600);

}

void loop() {
  if (Serial.available() > 0) {
    datain = Serial.readString();
    numberin = datain.toInt();
    for (int i = 0; i < numberin; i++) {
      digitalWrite(led, HIGH);
      delay(150);
      digitalWrite(led, LOW);
      delay(150);
    }
  }

}
