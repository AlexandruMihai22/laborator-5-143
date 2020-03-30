#include "eveniment.hpp"


unsigned Eveniment::count = 0;


Eveniment::Eveniment (const string n, const string l, const Data dt, const unsigned dr) :
    nume(n), locatie(l), data(dt), durata(dr)
{
    count++;
    this->ID = "EV-I" + to_string(count);
}