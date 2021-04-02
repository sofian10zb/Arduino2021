/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

const int ledA = 5;          // donar nom al pin 7 de l’Arduino
const int ledB = 6;          // donar nom al pin 8 de l’Arduino
const int ledC = 7;          // donar nom al pin 9 de l’Arduino
const int ledD = 8;         // donar nom al pin 10 de l’Arduino
const int ledE = 9;         // donar nom al pin 11 de l’Arduino
const int ledF = 10;         // donar nom al pin 12 de l’Arduino
const int ledG = 11;         // donar nom al pin 12 de l’Arduino
const int temps = 1000;


//********** Setup ****************************************************************
void setup()
{
  pinMode(ledA, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(ledB, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(ledC, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(ledD, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(ledE, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(ledF, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(ledG, OUTPUT);     // definir el pin 12 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  delay(temps); 

  digitalWrite(ledA, LOW);    
  digitalWrite(ledF, LOW);    
  digitalWrite(ledG, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledE, HIGH);
  
    delay(temps); 

  digitalWrite(ledG, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledE, LOW);

    delay(temps);

  digitalWrite(ledG, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  
    delay(temps);


  digitalWrite(ledA, HIGH);
  digitalWrite(ledG, HIGH);

    delay(temps);

  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledG, LOW);
  digitalWrite(ledC, LOW);

    delay(temps);

  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledF, HIGH);

    delay(temps);
  
}

//********** Funcions *************************************************************
