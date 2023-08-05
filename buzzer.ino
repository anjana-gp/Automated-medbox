// This code is for testing the active buzzer

int buzzerPin = 11;                                                           // initializing the buzzer pin at pin 11 of Arduino
void setup() {                                                                     // Code written in it will only run once
  pinMode(buzzerPin, OUTPUT);                               // This will set the pin 11 as output
  beep(50);                                                                          // This will make a beep sound Beep
  beep(50);                                                                         
  delay(1000);                                                                     //Adding a delay of 1 sec.
}
void loop() {                                                                       // Code written in it will run continuously
  beep(50);                                                                          // This will make a beep sound after every 500 milliseconds
  delay(1000);                                                                     // Adding a delay of one second.
}
void beep(unsigned char delayms) {                       // Created a function for beep
  analogWrite(buzzerPin, 20);                                      // This will set pin 11 to high
  delay(delayms);                                                             // Giving a delay
  analogWrite(buzzerPin ,0);                                        // This will set pin 11 to LOW
  delay(delayms);                                                             // Giving a delay
}
