/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ledAR = 7;          // donar nom al pin 7 de l’Arduino
const int ledAG = 8;          // donar nom al pin 8 de l’Arduino
const int ledAV = 9;          // donar nom al pin 9 de l’Arduino
const int ledBR = 10;         // donar nom al pin 10 de l’Arduino
const int ledBG = 11;         // donar nom al pin 11 de l’Arduino
const int ledBV = 12;         // donar nom al pin 12 de l’Arduino
const int temps = 2000;


//********** Setup ****************************************************************
void setup()
{
  pinMode(ledAR, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(ledAG, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(ledAV, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(ledBR, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(ledBG, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(ledBV, OUTPUT);     // definir el pin 12 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  
  delay(temps);                  // es queden leds 500ms encesos
  digitalWrite(ledAR, HIGH);    // posar a 5V el pin 5
  digitalWrite(ledBR, HIGH);    // posar a 5V el pin 8

    delay(temps); 

  digitalWrite(ledAR, HIGH);    // posar a 5V el pin 5
  digitalWrite(ledBR, LOW);    // posar a 0V el pin 8
  digitalWrite(ledBV, HIGH);    // posar a 5V el pin 10

    delay(temps);

  digitalWrite(ledAR, HIGH);    // posar a 5V el pin 5
  digitalWrite(ledBV, HIGH);    // posar a 5V el pin 10

    delay(temps);

  digitalWrite(ledAR, HIGH);    // posar a 5V el pin 5
  digitalWrite(ledBV, HIGH);    // posar a 5V el pin 10
  
    delay(temps);

  digitalWrite(ledAR, HIGH);    // posar a 5V el pin 5
  digitalWrite(ledBV, HIGH);    // posar a 5V el pin 10

    delay(temps);

  digitalWrite(ledAR, HIGH);    // posar a 5V el pin 5
  digitalWrite(ledBV, LOW);    // posar a 0V el pin 10
  digitalWrite(ledBG, HIGH);
    delay(temps);

  digitalWrite(ledAR, HIGH);    // posar a 5V el pin 5
  digitalWrite(ledBG, LOW);
    delay(temps);

  digitalWrite(ledAR, HIGH);    // posar a 5V el pin 5
  digitalWrite(ledBG, HIGH);    // posar a 5V el pin 10

    delay(temps);

  digitalWrite(ledAR, HIGH);    // posar a 5V el pin 5
  digitalWrite(ledBG, LOW);    // posar a 5V el pin 10

    delay(temps);

  digitalWrite(ledAR, HIGH);    // posar a 5V el pin 5
  digitalWrite(ledBG, HIGH);    // posar a 5V el pin 10

    delay(temps);

  digitalWrite(ledAR, HIGH);    // posar a 5V el pin 5
  digitalWrite(ledBR, HIGH);    // posar a 5V el pin 10
  digitalWrite(ledBG, LOW);
  
    delay(temps);

  digitalWrite(ledBR, HIGH);
  digitalWrite(ledAR, LOW);
  digitalWrite(ledAV, HIGH);

    delay(temps);

  digitalWrite(ledBR, HIGH);
  digitalWrite(ledAV, HIGH);

    delay(temps);

  digitalWrite(ledBR, HIGH);
  digitalWrite(ledAV, HIGH);
  
    delay(temps);

  digitalWrite(ledBR, HIGH);
  digitalWrite(ledAV, HIGH);
  
   delay(temps);

  digitalWrite(ledBR, HIGH);
  digitalWrite(ledAV, LOW);
  digitalWrite(ledAG, HIGH);
  
    delay(temps);

  digitalWrite(ledBR, HIGH);
  digitalWrite(ledAG, LOW);
  
    delay(temps);

  digitalWrite(ledBR, HIGH);
  digitalWrite(ledAG, HIGH);
  
    delay(temps);

  digitalWrite(ledBR, HIGH);
  digitalWrite(ledAG, LOW);
  
    delay(temps);

  digitalWrite(ledBR, HIGH);
  digitalWrite(ledAG, HIGH);
     
     delay(temps);

  digitalWrite(ledBR, HIGH);
  digitalWrite(ledAR, HIGH);
  digitalWrite(ledAG, LOW);
  
    delay(temps);
}

//********** Funcions *************************************************************
