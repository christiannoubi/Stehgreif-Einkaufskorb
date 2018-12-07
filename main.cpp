#pragma once;
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "Apfel.h"
#include "Pizza.h"
#include "Bier.h"
#include "Einkaufskorb.h"
using namespace std;

int main() {
    int i ;
    Einkaufskorb einkaufskorb;
    Artikel Apfel;
    Artikel Pizza;
    Artikel Bier;
    cout << "=====================Supermarkt====================" << std::endl;
    cout <<"(1) Apfel" << endl;
    cout <<"(2) Bier" << endl;
    cout <<"(3) Pizza" << endl;
    cout <<"(0) Einkauf beenden" << endl;
    cin >> i;

    while  (i<4) {
        if (i == 1) {
            cout <<"(1) Apfel" << endl;
            einkaufskorb.aufnehmen(Apfel);
        }
        else if (i == 2) {
            cout <<"(2) Bier" << endl;
            einkaufskorb.aufnehmen(Pizza);
        }
        else if (i == 3) {
            cout <<"(3) Pizza" << endl;
            einkaufskorb.aufnehmen(Bier);
        }
        else if (i == 0) {
            cout <<"(0) Einkauf beenden" << endl;
            cout << "=====================Supermarkt====================" << std::endl;
            cout << "Anzahl: " << einkaufskorb.getAnzahl();
            cout << "Gesamtpreis: " << einkaufskorb.getGesamtpreis();
            cout << "Folgendes wurde eingejkauft: " << einkaufskorb.getInhalt();
            break;
        }
    }
    return 0;
}