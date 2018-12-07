#pragma once;
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "Artikel.h"
using namespace std;

class Pizza : public Artikel {


private:

public:

    Pizza(string art, string name, double preis): Artikel ("Fertiggericht", "Pizza", 2.99){

    }

    ~Pizza() {

    }
};