#include <iostream>
#include "Personne.h"
#include "Voiture.h"

using namespace std;


int main()
{
    Personne john = Personne("John", "June 25, 1990", "man", "no car", 25320);
    john.DisplaySumup();

    Voiture peugeot = Voiture("Peugeot 208", "GH-456-XD", 12563, 7251)
    peugeot.DisplayVroum();

    Personne alex = Personne("Alex", "Septembre 2, 1995", "no binary", "Peugeot 208(GH-456-XD)", 5432);
    alex.DisplaySumup();
}

