#include <iostream>
#include <string>

using namespace std;

enum dayOfWeek {PO = 1, WT, SR, CZW, PT, SO, ND};
string getDay(dayOfWeek);

int main(void)
{
    //dayOfWeek dzienTygodnia;

    cout << "Wybierz dzien tygodnia: \n";

    int indeks;
    cin >> indeks;

    cout << getDay(dayOfWeek(indeks)) << endl;
    

    return 0;
}

string getDay(dayOfWeek dzienTygodnia)
{
    switch (dzienTygodnia)
    {
        case PO:
            return "Poniedzialek";
            break;
        case WT:
            return "Wtorek";
            break;
        case SR:
            return "Sroda";
            break;
        case CZW:
            return "Czwartek";
            break;
        case PT:
            return "Piatek";
            break;
        case SO:
            return "Sobota";
            break;
        case ND:
            return "Niedziela";
            break;
        default:
            return "Nie ma takiego dnia tygodnia.";
    }
}