/**********************************************************************************
**                                                                               **
**                              DISPLAY 7 SEGMENTS                               **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

int buttonPin = 2;
int buttonState;
int comptador ;
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
  comptador = 0;
}

//********** Loop *****************************************************************
void loop()
{
  buttonState = digitalRead(buttonPin);
  
  
  if (buttonState == LOW)

  {
    comptador = comptador + 1;
  }
    if (comptador == 0);
    {
  digitalWrite(ledA, LOW);    
  digitalWrite(ledF, LOW);    
  digitalWrite(ledE, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledG, HIGH);
    }
    if(comptador == 1);
    {
  digitalWrite(ledA, HIGH);    
  digitalWrite(ledF, HIGH);    
  digitalWrite(ledE, HIGH);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledG, HIGH);
    }
    if(comptador == 2);
    {
  digitalWrite(ledA, LOW);    
  digitalWrite(ledB, LOW);    
  digitalWrite(ledG, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledF, HIGH);
    }
    if(comptador == 3);
    {
  digitalWrite(ledA, LOW);    
  digitalWrite(ledB, LOW);    
  digitalWrite(ledC, LOW);
  digitalWrite(ledG, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledE, HIGH);
    }
    if(comptador == 4);
    {
  digitalWrite(ledF, LOW);    
  digitalWrite(ledB, LOW);    
  digitalWrite(ledG, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledA, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledD, HIGH);
    }
    if(comptador == 5);
    {
  digitalWrite(ledA, LOW);    
  digitalWrite(ledF, LOW);    
  digitalWrite(ledG, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledE, HIGH);
    }
    if(comptador == 6);
    {
  digitalWrite(ledF, LOW);    
  digitalWrite(ledG, LOW);    
  digitalWrite(ledE, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledA, HIGH);
    }
    if(comptador == 7);
    {
  digitalWrite(ledA, LOW);    
  digitalWrite(ledB, LOW);    
  digitalWrite(ledC, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledD, HIGH);
    }
    if(comptador == 8);
    {
  digitalWrite(ledF, LOW);    
  digitalWrite(ledG, LOW);    
  digitalWrite(ledE, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledA, LOW);
    }
    if(comptador == 9);
    {
  digitalWrite(ledA, LOW);    
  digitalWrite(ledB, LOW);    
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
    }
    if(comptador == 10);
    {
    comptador = 0;
    }
    
  
}

//********** Funcions *************************************************************
