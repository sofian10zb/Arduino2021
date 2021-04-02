/**********************************************************************************
**                                                                               **
**                              DISPLAY 7 SEGMENTS                               **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

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
