#include <iostream>

using namespace std;

int main()
{

    char rez;
    int totaliPikeve = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Shenoni rezultatin F, B, H: ";
        cin >> rez;

        switch (rez)
        {
        case 'H':
            totaliPikeve += 0;
            break;
        case 'F':
            totaliPikeve += 3;
            break;
        case 'B':
            totaliPikeve += 1;
            break;
        default:
            cout << "Shkronje jo valide" << endl;
            i--;
        }
    }

    cout << "Totali i pikeve: " << totaliPikeve << endl;
    cout << "Piket per ndeshje: " << (float)totaliPikeve / 5 << endl;

    return 0;