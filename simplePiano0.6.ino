#include "pitches.h"
const int C = 10;
const int D = 9;
const int E = 8;
const int F = 7;
const int G = 6;
const int A = 5;
const int B = 4;

int T_C;
int T_D;
int T_E;
int T_F;
int T_G;
int T_A;
int T_B;
int sensorValue;
float voltage;
const int Buzz = 11;
const int LED = 13;

void setup()
{
  Serial.begin(9600); 
  pinMode(LED, OUTPUT);
  pinMode(C, INPUT);
  digitalWrite(C,HIGH);
  
  pinMode(D, INPUT);
  digitalWrite(D,HIGH);
  
  pinMode(E, INPUT);
  digitalWrite(E,HIGH);
  
  pinMode(F, INPUT);
  digitalWrite(F,HIGH);
  
  pinMode(G, INPUT);
  digitalWrite(G,HIGH);
  
  pinMode(A, INPUT);
  digitalWrite(A,HIGH);
  
  pinMode(B, INPUT);
  digitalWrite(B,HIGH);

   digitalWrite(LED,LOW);
   
}

void loop()
{
  checkVoltage();
    
  while(digitalRead(C) == LOW)
  {
    tone(Buzz,T_C);
    digitalWrite(LED,HIGH);
    
  }

  while(digitalRead(D) == LOW)
  {
    tone(Buzz,T_D);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(E) == LOW)
  {
    tone(Buzz,T_E);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(F) == LOW)
  {
    tone(Buzz,T_F);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(G) == LOW)
  {
    tone(Buzz,T_G);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(A) == LOW)
  {
    tone(Buzz,T_A);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(B) == LOW)
  {
    tone(Buzz,T_B);
    digitalWrite(LED,HIGH);
  }

  noTone(Buzz);
  digitalWrite(LED,LOW);

}
void checkVoltage(){
   sensorValue = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  voltage = sensorValue * (5.0 / 1023.0);
  // print out the value you read:
  Serial.print("Voltage =");// prins the text "Voltage ="
  Serial.print(voltage);
  Serial.println();
  Serial.print(T_C);
  Serial.println();
  //delay(300);
  if (voltage < 1.0){
  T_C = NOTE_C2;
  T_D = NOTE_D2;
  T_E = NOTE_E2;
  T_F = NOTE_F2;
  T_G = NOTE_G2;
  T_A = NOTE_A2;
  T_B = NOTE_B2;
  }
    if (voltage >= 1.0){
  T_C = NOTE_C3;
  T_D = NOTE_D3;
  T_E = NOTE_E3;
  T_F = NOTE_F3;
  T_G = NOTE_G3;
  T_A = NOTE_A3;
  T_B = NOTE_B3;
  }
    if (voltage >= 2.0){
  T_C = NOTE_C4;
  T_D = NOTE_D4;
  T_E = NOTE_E4;
  T_F = NOTE_F4;
  T_G = NOTE_G4;
  T_A = NOTE_A4;
  T_B = NOTE_B4;
  }
    if (voltage >= 3.0){
  T_C = NOTE_C5;
  T_D = NOTE_D5;
  T_E = NOTE_E5;
  T_F = NOTE_F5;
  T_G = NOTE_G5;
  T_A = NOTE_A5;
  T_B = NOTE_B5;
  }
    if (voltage >= 4.0){
  T_C = NOTE_C6;
  T_D = NOTE_D6;
  T_E = NOTE_E6;
  T_F = NOTE_F6;
  T_G = NOTE_G6;
  T_A = NOTE_A6;
  T_B = NOTE_B6;
  }
    if (voltage >= 5.0){
  T_C = NOTE_C7;
  T_D = NOTE_D7;
  T_E = NOTE_E7;
  T_F = NOTE_F7;
  T_G = NOTE_G7;
  T_A = NOTE_A7;
  T_B = NOTE_B7;
  }
  return;
}
