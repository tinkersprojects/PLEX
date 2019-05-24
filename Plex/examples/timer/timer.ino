# include <Plex.h>

Plex PLEX;

#define startpin 3

unsigned long StartTime = 0;


void setup() 
{
  pinMode(startpin, INPUT);
  
  PLEX.lcd.clear();
  PLEX.lcd.setCursor(0, 1);
  PLEX.lcd.print("Press start");
}

void loop() 
{
  while(digitalRead(startpin) == LOW);
  PLEX.lcd.clear();
  StartTime = millis();

  while(digitalRead(startpin) == HIGH)
    display();
  while(digitalRead(startpin) == LOW)
    display();

  if(digitalRead(startpin) == HIGH)
  {
    PLEX.lcd.setCursor(0, 1);
    PLEX.lcd.print("Press start");
  }
  while(digitalRead(startpin) == HIGH);
}

void display()
{
  PLEX.lcd.setCursor(0, 0);
  unsigned long CurrentTime = millis() - StartTime;

  int millis = CurrentTime%1000;
  int seconds = (CurrentTime/1000)%60;
  int min = (CurrentTime/1000)/60;
}
