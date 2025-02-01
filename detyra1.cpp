#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char rez;
    int totaliPikeve = 0;

    for (int i = 0; i < 5; i++)
    {
        bool inputValide = false;
        while (!inputValide) 
        {
            cout << "Shenoni rezultatin per ndeshjen " << i + 1 << " (F, B, H): ";
            cin >> rez;
            rez = toupper(rez);

            switch (rez)
            {
            case 'H':
                totaliPikeve += 0;
                inputValide = true;
                break;
            case 'F':
                totaliPikeve += 3;
                inputValide = true;
                break;
            case 'B':
                totaliPikeve += 1;
                inputValide = true;
                break;
            default:
                cout << "Gabim! Ju lutem vendosni F, B ose H.\n";
            }
        }
    }

    cout << "\n-------------------------\n";
    cout << "Totali i pikeve: " << totaliPikeve << endl;
    cout << "Piket mesatare per ndeshje: " << (float)totaliPikeve / 5 << endl;
    cout << "-------------------------\n";

    return 0;
}

