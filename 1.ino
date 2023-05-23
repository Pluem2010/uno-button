// Define constant values for the pins connected to the Button & LED
const int LED=9 
const int BUTTON=2;

 

/*Declare and initialize GLOBAL boolean variables.
* Global variables declared at the top of the program.
* Global variables can be used and changed by any function within this sketch
*/
bool lastButton = LOW; //Store the previous button state
bool currentButton = LOW; //Store the current button state
bool ledOn= false; //Store the LED state (on/off)

 

void setup()
{
  //Set the LED pin as OUTPUT and BUTTON as INPUT
  pinMode(LED,OUTPUT);
  pinMode(BUTTON, INPUT);
}

 

//Define debounce function that accepts a boolean input variable "last"
bool debounce(bool last )
{
  //Read the current button state
  bool current = digitalRead(BUTTON);
/* Check if the current button state differs from the previous
button state. This != represents inequality and is ued to compare the present and the previous button values in the
if/else statements. 
*/
  If(last!=current)
}
{
/* 
  *  If the current state of the button and the previous one are different
  *  then the button must have been pressed and if statement will execute its content. Wait 5ms to debounce the button.
  */

 

  delay(5);

 

  // Reread the button after debounce and update the current button state
    current = digitalRead(BUTTON);
}
//function returns boolean value representing the current button
  return current;
  //current is a LOCAL variable - it is declared and used only within
}

 

void loop()
{
  /*
   * when the deounce function is called from the main loop, the returned
   */
   currentButton=debounce(lastButton);

 

   /*
    * Check if the previous button state was low and the current button
    * state is HIGH. the && is a logical operator that means AND. If statement block should execcute only
    * if both of the equalities evaluate to true.
    */
    if (lastButton==LOW && currentButton==HIGH)
    {
      ledOn= !ledOn
      /*
       * if button has been pressed, the value of the ledOn variable reasign 
       * By putting an exclamation mark infront of the ledOn variable. You rese the variable to the opposite
       * of whatever it currently is.
       */
    }
    lastButton= currentButton;
    digitalWrite(LED, ledOn);
