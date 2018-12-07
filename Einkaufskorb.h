#pragma once;
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "Artikel.h"
using namespace std;

class Einkaufskorb {

private:
        vector <Artikel>_Inhalt;
public:

    Einkaufskorb () {

    }
    ~Einkaufskorb () {

    }
    void aufnehmen (Artikel a) {

        _Inhalt.push_back(a);

    }

    double getGesamtpreis () {
        double gespreis = 0;
        for (auto e : _Inhalt) {
            gespreis += e.getPreis();
        }
        return gespreis;
    }
    double getAnzahl () {
        int anzahl = 0;
        for (int i =0; i< _Inhalt.size(); i++) {
            anzahl = i++;
        }
        return anzahl;
    }
    string getInhalt () {
        stringstream s;
        for (auto item : _Inhalt) {
           s <<item.getArt() << item.getName() << item.getPreis() << endl;
        }
    }

};