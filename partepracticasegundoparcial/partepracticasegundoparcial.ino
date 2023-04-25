int led10 = 10;
int led2 = 2;
int led3 = 3;
int led4 = 4;
int led5 = 5;
int led6 = 6;
int led7 = 7;
int boton1 = 8;
int boton2 = 9;
long valor;
int intensidad;
int potenciometro = A0;

void setup() {
  Serial.begin(9600);
  pinMode(boton1, INPUT_PULLUP);
  pinMode(boton2, INPUT_PULLUP);

  pinMode(led10, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);

}

void loop() {

  if (digitalRead(boton1) == LOW) {
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(1000);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    delay(2000);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
  }

  while (digitalRead(boton2) == LOW){
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
  }
  valor = analogRead(A0);
   Serial.print("valor de potenciometro ");
   Serial.println(valor);
   delay(100);

  intensidad = analogRead (potenciometro) / 4;
    analogWrite(led10, intensidad);
  }



  


