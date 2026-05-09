#define led1 7
#define led2 5
#define led3 3

#define ldr A0

void setup() {

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  int value = analogRead(ldr);

  Serial.println(value);

  // Dark condition
  if (value < 500) {

    digitalWrite(led1, HIGH);
    delay(200);
    digitalWrite(led1, LOW);

    digitalWrite(led2, HIGH);
    delay(200);
    digitalWrite(led2, LOW);

    digitalWrite(led3, HIGH);
    delay(200);
    digitalWrite(led3, LOW);
  }

  // Bright condition
  else {

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
}