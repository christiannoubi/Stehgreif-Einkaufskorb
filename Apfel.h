#pragma once;
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "Artikel.h"
using namespace std;

class Apfel : public Artikel {


private:

public:

    Apfel() : Artikel ("Getraenk", "Bier", 1.5) {

    }

    ~Apfel() {

    }
};