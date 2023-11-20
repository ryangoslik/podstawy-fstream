#include <fstream>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    fstream plik;
    string linia;
    int Sumal = 0;
    int sumalp = 0;
    plik.open("dane.txt", ios::in);

    if (plik.good() == true) { //suma wszytskich liczb (podzielnych przez 1 (%) - dzielenie
        cout << "W danej lokalizacji znajduje się plik tekstowy 'notka.txt'" << endl;
        while (getline(plik, linia)) {
            if (stoi(linia) % 1 == 0) {
                Sumal = Sumal + stoi(linia);
            }
        }
        cout << "suma liczb = " << Sumal << endl;
            }/* //suma liczb parzystych i innych
            if (stoi(linia) % 2 == 0) {
                sumalp = sumalp + stoi(linia);
            }
            else {
                Sumal = Sumal + stoi(linia);
            }
        }
        cout << "suma liczb parzystych = " << sumalp << endl;
        cout << "suma liczb innych = " << Sumal << endl;
    }*/
    else {
        cout << "nie ma file" << endl;
    }
    plik.close();
    return 0;

}
