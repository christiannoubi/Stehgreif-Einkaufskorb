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

    Bier() : Artikel ("Bier",  "Getränk", 0.5) {

    }

    ~Bier() {

    }
};