#include <iostream>
#include "math.h"
#define M_PI       3.14159265358979323846

using namespace std;

void z1(double a)
{
    double z1 = 0;
    z1 = sin(M_PI/2+3*a)/(1-sin(3*a-M_PI));
    cout << "z1= " << z1 << endl;
}

void z2(double a)
{
    double z2;
    z2 = 1/tan(5*M_PI / 4 + 3 * a/2);
    cout << "z2= " << z2 << endl;
}

void a()
{
    double x = 3.981E-2; 
    double y = -1.625E3;
    double z = 0.512;
    double a0= round(1.26185*1E5)/1E5;
    double a1 =pow(2,-x);
    double a2 = sqrt(x+pow(fabs(y),0.25));
    double a3 = pow(exp(x-1/sin(z)), 1. / 3);
    double a = round(a1 * a2 * a3*1E5)/1E5;

    
    if (a == a0)
    {
        cout << "Переменные равны" << endl;
        cout << "a0= " << a0 << endl;
        cout << "a= " << a << endl;
    }
    else cout << "Переменные не равны" << endl;
}

int main()
{
    setlocale(LC_ALL, "ru");
    begin:
    int choose;
    
    cout << "Задание 1. Составить программу для расчета значений z1 и z2." << endl;
    cout << "Задание 2. Составить программу для расчета значения функции." << endl;
    cout << "Выберите задание" << endl;
    cin >> choose;


    switch (choose)
    {
        case 1:
        {
            double a;
            cout << "введите значение a: "<< endl;
            cin >> a;
            z1(a);
            z2(a);
            goto begin;

        }break;

        case 2:
        {
            a();
            goto begin;

        }break;


    }

    
}
