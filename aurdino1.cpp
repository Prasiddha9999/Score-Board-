//Name: Prasiddha Regmi
//Student_ID: 2059789
//Date: 2021/08/22

#include <LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2);

char inp1[]= {"WELLCOME TO MY MINI-PROJECTS"};
char inp2[]= {"CREATED-BY:PRASIDDHA REGMI  "};

void setup()
{
    lcd.begin(28,2);  
}
void loop()
{
    static int num1 = 0;
    static int num2 = 0;
    if (num1 >=28){
        if (num1== 29){
            lcd.clear();
            num1 = 0;
        }
        else
        {
            lcd.scrollDisplayLeft();
            delay(300);
        } 
    }
    else{
        lcd.setCursor(num1,0);
        lcd.print(inp1[num1]);
        num1 =num1 + 1;
      	lcd.setCursor(num2,1);
        lcd.print(inp2[num2]);
      	num2=num2+1;
    }
}

