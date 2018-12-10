#pragma once;
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "Artikel.h"
using namespace std;

class Einkaufskorb {

private:
        vector <Artikel*>_Inhalt;
public:

    Einkaufskorb () {

    }
    ~Einkaufskorb () {

    }
    void aufnehmen (Artikel &a) {

        _Inhalt.push_back(&a);

    }

    double getGesamtpreis () {
        double gespreis = 0;
        for (auto e : _Inhalt) {
            gespreis += e->getPreis();
            if (gespreis >=5) {
                cout << "Du hast kein Geld, bitte geht schnell zur Bank" << endl;
                break;
            }
        }
        return gespreis;
    }
    double getAnzahl () {
        return _Inhalt.size();
    }
   /* string getInhalt () {
        stringstream s;
        for (auto item : _Inhalt) {
           s <<item->getArt() << item->getName() << item->getPreis() << endl;
        }
        s.str();
    }*/
    string getInhalt() {
        stringstream s;
        for (unsigned int i= 0; i < _Inhalt.size(); i++){
            s<< _Inhalt[i]->getArt() << " " << _Inhalt[i]->getName() << " " << _Inhalt[i]->getPreis() <<endl;
        }
        return s.str();
    }

};

