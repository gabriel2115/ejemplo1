// Ejemplo 1 luz led
// 2022 04 04
// Gabriel López


int luzNaranja = 13;



void setup() {
  // put your setup code here, to run once:
  pinMode(luzNaranja, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(luzNaranja, HIGH);
  delay(150);


  digitalWrite(luzNaranja, LOW);
  delay(150);

}
