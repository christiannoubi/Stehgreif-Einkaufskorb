#pragma once;
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

class Artikel {

private:
        double _npreis;
        string _strArt;
        string _strName;
public:

    Artikel(string Art, string Name, double Preis) {
        this->_strArt = Art;
        this->_strName = Name;
        this->_npreis = Preis;
    }
    Artikel() {

    }

    ~Artikel() {

    }
    string getArt () {
        return _strArt;
    }

    string getName () {
        return _strName;
    }

    double getPreis () {
        return _npreis;
    }
};