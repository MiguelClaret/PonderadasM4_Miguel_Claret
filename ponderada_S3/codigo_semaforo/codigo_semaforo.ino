#include <Servo.h>

Servo myservo;


int led_vermelho = 8;
int led_amarelo = 9;
int led_verde = 10;


void setup() {
  // put your setup code here, to run once:
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_verde, OUTPUT);
  myservo.attach(6);  
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(led_vermelho, HIGH);
  digitalWrite(led_amarelo, LOW);
  digitalWrite(led_verde, LOW);
  myservo.write(60);
  delay(6000);
  digitalWrite(led_vermelho, LOW);
  digitalWrite(led_amarelo, HIGH);
  digitalWrite(led_verde, LOW);
  delay(2000);
  digitalWrite(led_vermelho, LOW);
  digitalWrite(led_amarelo, LOW);
  digitalWrite(led_verde, HIGH);
  myservo.write(170);
  delay(2000);
  for (int i = 0; i < 5; i++) {
    digitalWrite(led_vermelho, HIGH);
    digitalWrite(led_amarelo, LOW);
    digitalWrite(led_verde, HIGH);
    delay(250);
    digitalWrite(led_vermelho, LOW);
    digitalWrite(led_amarelo, LOW);
    digitalWrite(led_verde, LOW);
    delay(250);
    myservo.write(140);
}
  
  
}
