//declaration dump
const int buzzerPin = 2; //buzzer pin no 2 (digital)
unsigned long startMillis; //start millis 
unsigned long currentMillis; //current millis
const unsigned long periodFlashDoro = 1500000; // 25 mins
const unsigned long periodEndPomodoro = 300000; // 5 mins


//function to buzz at the starting of pomodoro
void startPomodoro(){
  digitalWrite(buzzerPin,HIGH);
  delay(500);
  digitalWrite(buzzerPin,LOW);

}

//function to make the led flash to indicate the on going pomodoro timer
void flashDoro(){
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(500);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(500);  
}

//flash timer during 5 mins break
void breakFlash(){
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(3000);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(3000);  
}

//buzz sound to indicate the end of pomodoro
void endPomodoro(){
  
  digitalWrite(buzzerPin,HIGH);
  delay(5000);
  digitalWrite(buzzerPin,LOW);
}

//average setup loop
void setup()
{
  Serial.begin(8600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}


//average main loop (main boy)
void loop()
{
  //start the pomodoro
  startPomodoro();
  startMillis = millis();
  while(millis() - startMillis < periodFlashDoro) {
    flashDoro();
  }
  //play at the end of pomodoro
  endPomodoro();
  startMillis = millis();
  while(millis() - startMillis < periodEndPomodoro) {
    breakFlash();
  }
  
}


