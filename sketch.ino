const byte ldr = A0;
int nilai;
const byte
  
  R1_PIN(2),
  R2_PIN(3),
  R3_PIN(4),
  R4_PIN(5);

void setup()
{
  Serial.begin(9600);
  pinMode(R1_PIN, OUTPUT); 
  pinMode(R2_PIN, OUTPUT); 
  pinMode(R3_PIN, OUTPUT); 
  pinMode(R4_PIN, OUTPUT); 
}

void loop() 
{
  nilai = analogRead(ldr);
  Serial.print("Nilai konst: ");
  Serial.println(nilai);

  if (nilai < 200) 
  {
    digitalWrite(R1_PIN, HIGH);
    delay(500);
    digitalWrite(R1_PIN, LOW);
    delay(000);
    digitalWrite(R2_PIN, HIGH);
    delay(500);
    digitalWrite(R2_PIN, LOW);
    delay(000);
    digitalWrite(R3_PIN, HIGH);
    delay(500);
    digitalWrite(R3_PIN, LOW);
    delay(000);
    digitalWrite(R4_PIN, HIGH);
    delay(500);
    digitalWrite(R4_PIN, LOW);
    delay(000);
  }

 if (nilai >=200 && nilai <=700)
  {
    digitalWrite(R1_PIN, HIGH);
    digitalWrite(R2_PIN, HIGH);
    digitalWrite(R3_PIN, HIGH);
    digitalWrite(R4_PIN, HIGH);
  }

if (nilai >700)
  {
    digitalWrite(R4_PIN, HIGH);
    delay(500);
    digitalWrite(R4_PIN, LOW);
    delay(000);
    digitalWrite(R3_PIN, HIGH);
    delay(500);
    digitalWrite(R3_PIN, LOW);
    delay(000);
    digitalWrite(R2_PIN, HIGH);
    delay(500);
    digitalWrite(R2_PIN, LOW);
    delay(000);
    digitalWrite(R1_PIN, HIGH);
    delay(500);
    digitalWrite(R1_PIN, LOW);
    delay(000);
  }
}