#pragma once;
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "Artikel.h"
using namespace std;

class Bier : public Artikel {


private:

public:

    Bier(string art, string name, double preis) : Artikel ("Bier",  "Getränk", 0.5) {

    }

    ~Bier() {

    }
};