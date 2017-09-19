#include <iostream>
#include <cstdlib>

using namespace std;

void initMenuBox();
void menuDecision(int);
double circle(double);
double square(double);
double rectangle(double, double);
double triangle (double, double);

int main()
{
    char ch='T';
    int choice;
    do
    {
        //system("cls"); //only on Windows 
        initMenuBox();
        cin >> choice;
        menuDecision(choice);

        cout << "Chcesz kontynuowaæ program? (T/N)" << endl;
        cin >> ch;

    }while(ch == 't' || ch == 'T');

    //system("PAUSE"); //only on Windows
    return 0;
}

void initMenuBox()
{
    cout << "Wybierz opcje: " << endl;
    cout << "1. Pole kola" << endl;
    cout << "2. Pole kwadratu" << endl;
    cout << "3. Pole prostokata" << endl;
    cout << "4. Pole trojkata" << endl;
}

void menuDecision(int choice)
{
    double a,b,h,r;
    switch(choice)
    {
        case 1:
            {
                cout << "Podaj promien: ";
                cin >> r;
                cout << "Pole kola wynosi: " << circle(r) << endl;
                break;
            }
        case 2:
            {
                cout << "Podaj bok kwadratu: ";
                cin >> a;
                cout << "Pole kwadratu wynosi: " << square(a) << endl;
                break;
            }
        case 3:
            {
                cout << "Podaj boki prostokata: ";
                cin >> a;
                cin >> b;
                cout << "Pole prostokata wynosi: " << rectangle(a, b) << endl;
                break;
            }
        case 4:
            {
                cout << "Podaj podstawe i wysokosc trojkata: ";
                cin >> a;
                cin >> h;
                cout << "Pole trojkata wynosi: " << triangle(a, h) << endl;
                break;
            }
        default:
            cout << "Blednie wybrana opcja." << endl;
    }
}

double circle(double r)
{
        const double PI = 3.14;
        return PI*r*r;
}

double square(double a)
{
        return a*a;
}

double rectangle(double a, double b)
{
    return a*b;
}

double triangle (double a, double h)
{
    return (0.5*a*h);
}
