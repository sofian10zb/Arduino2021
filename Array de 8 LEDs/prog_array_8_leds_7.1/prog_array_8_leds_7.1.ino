/**********************************************************************************
**                                                                               **
**                                  (num) + (-)                                  **
**                                                                               **
** NOM: Sofian Zeriouhi                                             14/03/2020   **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
int comptar = 30;
unsigned long temps = 300;


const int led0 = 5;          // donar nom al pin 5 de l’Arduino
//********** Setup ****************************************************************
void setup() // run once, when the sketch starts
{
 pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
 for (int i=1; i <= comptar; i++)
 {
 digitalWrite(led0, HIGH);    // posar a 5V el pin 5

 delay(temps);

 digitalWrite(led0, LOW);     // posar a 0V el pin 5 

 delay(temps);
 
 }
 
}
//********** Loop *****************************************************************
void loop() // we need this to be here even though its empty
{
}
//********** FUNCIONS *************************************************************
