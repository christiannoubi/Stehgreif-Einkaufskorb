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
    int i;
    bool done;
    Einkaufskorb einkaufskorb;
    Artikel *artikel;
    cout << "=====================Supermarkt====================" << endl;
    cout << "(1) Apfel" << endl;
    cout << "(2) Bier" << endl;
    cout << "(3) Pizza" << endl;
    cout << "(0) Einkauf beenden" << endl;

    while (done == false) {
        cin >> i;
        switch (i) {
            case 1 : {
                //done = true;
                artikel = new Apfel();
                einkaufskorb.aufnehmen(*artikel);
                cout << "(1) Apfel" << endl;
                break;
            }
            case 2 : {
                //done = true;
                artikel = new Bier();
                einkaufskorb.aufnehmen(*artikel);
                cout << "(2) Bier" << endl;
                break;
            }
            case 3 : {
                //done = true;
                artikel = new Pizza();
                einkaufskorb.aufnehmen(*artikel);
                cout << "(3) Pizza" << endl;
                break;
            }
            case 0: {
                //done = true;
                cout <<"(0) Einkauf beenden" << endl;
                cout << "=====================Supermarkt====================" << endl;
                cout << "Folgendes wurde eingekauft: \n" << einkaufskorb.getInhalt()<< endl;
                cout << "Anzahl: " << einkaufskorb.getAnzahl()<< endl;
                cout << "Gesamtpreis: " << einkaufskorb.getGesamtpreis()<< endl;
                break;
            }
            default : {
                cout << "fehler" << endl;
                break;
            }
        }
    }
}