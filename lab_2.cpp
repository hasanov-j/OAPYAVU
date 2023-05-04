#include <iostream>
#include "math.h"

using namespace std;


void statusOfYear(int year) 
{
    int currentYear = 2023;
    if (year == 2023)
    {
        cout << "Текущий год" << endl;
    }
    else if (year < 2023)
    {
        cout << "Прошлый год" << endl;
    }
    else
    {
        cout << "будущий год" << endl;
    }

}

void NumberParity(int year)
{
    if (year % 2)
    {
        cout << "год нечетный" << endl;

    }
    else cout << "год четный" << endl;
}

void leapYear(int year)
{
    if ((year % 4 == 0) || ((year % 400 == 0) && (year % 100 == 0)))
    {
        cout << "Високосный год" << endl;
    }
    else cout << "Не високосный год" << endl;
}

void whoseYear(int year)
{
    switch (year%12)
    {
        case 0:
        {
            cout << "год обезяны" << endl;

        }break;

        case 1:
        {
            cout << "год петуха" << endl;

        }break;

        case 2:
        {
            cout << "год собаки" << endl;

        }break;

        case 3:
        {
            cout << "год кабана" << endl;

        }break;
         case 4:
        {
            cout << "год крысы" << endl;

        }break;

         case 5:
         {
             cout << "год быка" << endl;

         }break;

         case 6:
         {
             cout << "год тигра" << endl;

         }break;

         case 7:
         {
             cout << "год кролика" << endl;

         }break;

         case 8:
         {
             cout << "год дракона" << endl;

         }break;

         case 9:
         {
             cout << "год змеи" << endl;

         }break;

         case 10:
         {
             cout << "год лошади" << endl;

         }break;

         case 11:
         {
             cout << "год овцы" << endl;

         }break;

    }
}

void ternar()
{
    float value_x;
    float value_y;

    cout << "введите значение x: " << endl;
    cin >> value_x;

    cout << "введите значение y: " << endl;
    cin >> value_y;
    ((value_x >= -1 && value_x <= 1.5) && (value_y >= -0.5)) ? (cout << "ПЛЮС" << endl) : (cout << "МИНУС" << endl);
}

void mathIf()
{
   
    float z,x,y;
    cout << "введите z: " << endl;
    cin >> z;
    
    if (z >= 1)
    {
            x = z - 1;
            
    }
    else x = pow(z, 2) + 1;

    if (x == 0) cout << "Ошибка, z не должно быть равным единице" << endl;
    else
    {
        y =( exp(pow(sin(x), 3)) + log(x + 1) )/ sqrt(x);
        cout << "y= " << y << endl;
    }

}

void task5()
{

    float x, y,z;
    float min0X, min0Y, maxYX;

    do 
    {
        cout << "Введите x и y" << endl;
        cin >> x >> y;

    } while (x == y);

    min0X = x < 0 ? x : 0;
    min0Y= y < 0 ? y : 0;
    maxYX = y > x ? y : x;

    if (maxYX==0) cout << "Ошибка, деление на ноль невозможно" << endl;
    else
    {
        z = (min0X - min0Y) / pow(maxYX, 2);
        cout << "z= " << z << endl;
    }
}


int main()
{
    setlocale(LC_ALL, "Ru");

    int  choose;
    
    while (true) 
    {
        cout << "0-выход из программы" << endl;
        cout << "1-Решение задания 1" << endl;
        cout << "2-Решение задания 2" << endl;
        cout << "3-Решение задания 3" << endl;
        cout << "4-Решение задания 4" << endl;
        cout << "5-Решение задания 5" << endl;

        cout << "Введите номер задания: " << endl;
        cin >> choose;


        switch (choose)
        {
            case 0:
            {
                exit(10);

            }break;

            case 1: 
            {
                int year;
                cout << "введите год: " << endl;
                cin >> year;

                cout << "показывает состояние введеного года (прошлый, настоящий, будущий)" << endl;
                cout << "показывает четность или нечетность года" << endl;
                cout << "покавает високосный или не високосный год" << endl;

                statusOfYear(year);
                NumberParity(year);
                leapYear(year);

            }break;

            case 2:
            {
                int year;
                cout << "введите год: " << endl;
                cin >> year;

                whoseYear(year);


            }break;

            case 3:
            {
                ternar();

            }break;

            case 4:
            {
                mathIf();

            }break;

            case 5:
            {
                task5();

            }break;


            default: 
            {
                cout << "Введите корректное значение" << endl;

            } break;
        }
        
    }

}