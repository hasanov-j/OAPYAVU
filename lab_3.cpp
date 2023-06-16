//  Хасанов Д.
// Группа 30321
// ЛР-3
// Вариант 10

#include <iostream>
#include "math.h"
using namespace std;

void printTableHeader ()
{
    printf("----------------------\n");
    printf("|    x      |    F   |\n");
    printf("----------------------\n");
}

void printTableLine(double x, double F)
{
    printf("|   %.2lf   |  %.2lf |\n", x, F);
    printf("----------------------\n");
}

double factorial(double num) {
    if (num == 0)return 1;
    return num * factorial(num - 1);
}

void task1() 
{
    double x = -1, F = 0;
    double step = 0.05;
    double a, b,c;
    
    cout<< "Введите a,b,c:" << endl;
    //cin >> a >> b >> c;
    scanf_s("%lf %lf %lf", &a, &b, &c);


    printTableHeader();

    while (x <= 1 + 1e-10)
    {
        if (a < 0 && x != 0)
        {
            F = a * pow(x, 2) + pow(b, 2) * x;
        }
        else if (a > 0 && x == 0 && (x - c) != 0)
        {
            F = x - a / (x - c);
        }
        else if (c != 0) {

            F = 1 + x / c;
        }
        else
        {
            printf("|    %.2lf    |    ----   |\n", x);
            x += step;
            continue;
        }
 
        printTableLine(x, F);
        x += step;
    }

}

void task2()
{
    int n;
    cout << "Ввелите число от 0 до 20:" << endl;
    cin >> n;
    int centr = n / 2;
    if (n > 0 && n <= 20)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((i == 0) || (i == n - 1) || (i == j)) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    else {
        cout << "n вне диапазона" << endl;
    }
}
void task3()
{
    double a = 0.1, b = 1, h=0.1;
    int n= 20;
    printf("---------------------------------------------\n");
    printf("|   x   |   S(x)   |   Y(x)   | |Y(x)-S(x)| |\n");
    printf("---------------------------------------------\n");
    for (double x = a; x <= b + 1e-10; x += h) {
        double sx = 0;
        for (double k = 0; k <= n; k++) 
        {
            double p = pow(x, 2 * k + 1) / factorial(2 * k + 1);
            sx += p;
        }
        double yx = (exp(x) - exp(-x)) / 2;

        printf("|%8.3f |%8.3f |%8.3f |%8.3f |\n", x, sx, yx, fabs(yx - sx));
    }
}



int main()
{
    setlocale(LC_ALL, "ru");
    int choose;
    
    while (true) {

        cout << "Введите номер задания от 1 до 3. Введите 0 для выхода из программы : " << endl;
        cin >> choose;

        switch (choose)
        {
        case 0:
        {
            exit(EXIT_SUCCESS);
        } break;

        case 1:
        {
            task1();

        } break;

        case 2:
        {
            task2();

        } break; 

        case 3:
        {
            task3();

        } break;

        }
    }

            
}