/**********************************************************************************
**                                                                               **
**                              DISPLAY 7 SEGMENTS                               **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

boolean buttonPin = 2;
const int ledA = 5;       
const int ledB = 6;          
const int ledC = 7;          
const int ledD = 8;     
const int ledE = 9;    
const int ledF = 10;     
const int ledG = 11;        
const int temps = 1000;


//********** Setup ****************************************************************
void setup()
{
  pinMode(ledA, OUTPUT);     
  pinMode(ledB, OUTPUT);     
  pinMode(ledC, OUTPUT);   
  pinMode(ledD, OUTPUT);    
  pinMode(ledE, OUTPUT); 
  pinMode(ledF, OUTPUT);   
  pinMode(ledG, OUTPUT);   
  pinMode(buttonPin, INPUT);
}

//********** Loop *****************************************************************
void loop()
{
  if (buttonPin == LOW)

  {
  
  digitalWrite(ledA, LOW);    
  digitalWrite(ledF, LOW);    
  digitalWrite(ledE, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledG, HIGH);
  
    delay(temps); 

  digitalWrite(ledA, HIGH);    
  digitalWrite(ledF, HIGH);    
  digitalWrite(ledE, HIGH);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledG, HIGH);

    delay(temps);

  digitalWrite(ledA, LOW);    
  digitalWrite(ledB, LOW);    
  digitalWrite(ledG, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledF, HIGH);
  
    delay(temps);


  digitalWrite(ledA, LOW);    
  digitalWrite(ledB, LOW);    
  digitalWrite(ledC, LOW);
  digitalWrite(ledG, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledE, HIGH);

    delay(temps);

  digitalWrite(ledF, LOW);    
  digitalWrite(ledB, LOW);    
  digitalWrite(ledG, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledA, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledD, HIGH);

    delay(temps);

  digitalWrite(ledA, LOW);    
  digitalWrite(ledF, LOW);    
  digitalWrite(ledG, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledE, HIGH);

    delay(temps);

  digitalWrite(ledF, LOW);    
  digitalWrite(ledG, LOW);    
  digitalWrite(ledE, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledA, HIGH);

    delay(temps);

  digitalWrite(ledA, LOW);    
  digitalWrite(ledB, LOW);    
  digitalWrite(ledC, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledD, HIGH);

    delay(temps);

  digitalWrite(ledF, LOW);    
  digitalWrite(ledG, LOW);    
  digitalWrite(ledE, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledA, LOW);
    
    delay(temps);

  digitalWrite(ledA, LOW);    
  digitalWrite(ledB, LOW);    
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);

    delay(temps);

  }
}

//********** Funcions *************************************************************
