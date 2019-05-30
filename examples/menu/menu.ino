# include <Plex.h>

Plex PLEX;

#define UpPin 3
#define DownPin 10
#define SelectPin 11

#define NumberOfMenuItems 5
int menuLocation = 0;

typedef void (*CallbackFunction) ();
void Menu1();
void Menu2();
void Menu3();
void Menu4();
bool Menu5();

struct Menu {
    String title;
    CallbackFunction Callback; 
} MainMenu[NumberOfMenuItems] = {
    {"Menu1",Menu1},
    {"Menu2",Menu2},
    {"Menu3",Menu3},
    {"Menu4",Menu4},
    {"Menu5",Menu5},
};


void setup() 
{
    pinMode(UpPin, INPUT);
    pinMode(DownPin, INPUT);
    pinMode(SelectPin, INPUT);
    PrintMenu();
}

void loop() 
{
    if(digitalRead(UpPin)==HIGH)
    {
        menuLocation++;
        if(menuLocation >= NumberOfMenuItems)
        menuLocation=0;
        PrintMenu();
        while(digitalRead(UpPin)==HIGH);
    }

    if(digitalRead(DownPin)==HIGH)
    {
        menuLocation--;
        if(menuLocation < 0)
        menuLocation=NumberOfMenuItems-1;
        PrintMenu();
        while(digitalRead(DownPin)==HIGH);
    }

    if(digitalRead(SelectPin)==HIGH)
    {
        while(digitalRead(SelectPin)==HIGH);
        MainMenu[menuLocation].Callback();
    }
}

void PrintMenu()
{
    PLEX.lcd.clear();
    PLEX.lcd.print("Plex Menu");
    PLEX.lcd.setCursor(0, 1);
    PLEX.lcd.print(MainMenu[menuLocation].title);
}

void Menu1()
{
    PLEX.lcd.clear();
    PLEX.lcd.print("Menu 1");
    delay(3000);
}

void Menu2()
{
    PLEX.lcd.clear();
    PLEX.lcd.print("Menu 2");
    delay(3000);
}

void Menu3()
{
    PLEX.lcd.clear();
    PLEX.lcd.print("Menu 3");
    delay(3000);
}

void Menu4()
{
    PLEX.lcd.clear();
    PLEX.lcd.print("Menu 4");
    delay(3000);
}

bool Menu5()
{
    PLEX.lcd.clear();
    PLEX.lcd.print("Menu 5");
    delay(3000);
}