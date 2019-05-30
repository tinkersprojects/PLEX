#include <SPI.h>
#include <SD.h>
# include <Plex.h>

Plex PLEX;
File dataFile;

long timeslogged = 0;

void setup() 
{
    while(!SD.begin(SD_CS)) 
    {
        PLEX.lcd.setCursor(0,0);
        PLEX.lcd.print(" SD Card failed ");
        PLEX.lcd.setCursor(0,0);
        PLEX.lcd.print(" SD Card failed ");
    }

    PLEX.lcd.clear();
    dataFile = SD.open("datalog.csv", FILE_WRITE);
    while(!dataFile) 
    {
        PLEX.lcd.setCursor(0,0);
        PLEX.lcd.print(" SD Card Error ");
        PLEX.lcd.setCursor(0,1);
        PLEX.lcd.print("opening logging file");
    }
    dataFile.println("num,A0,A1,A2,A3,A4,A5,A6,A7");
    dataFile.close();
}

void loop() 
{
    timeslogged++;
    
    File dataFile = SD.open("datalog.csv", FILE_WRITE);
    if (dataFile) 
    {
        dataFile.print(timeslogged);
        for(int i=0;i<8;i++)
        {
            dataFile.print(",");
            dataFile.println(PLEX.analogReadA(i));
        }
        dataFile.println();
        dataFile.close();
        
        PLEX.lcd.setCursor(0,0);
        PLEX.lcd.print("# Logged:");
        PLEX.lcd.print(timeslogged);
    }
    else 
    {
        PLEX.lcd.setCursor(0,0);
        PLEX.lcd.print("error opening datalog.txt");
    }
    delay(1000);
}
