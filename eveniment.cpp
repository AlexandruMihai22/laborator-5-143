#include "eveniment.hpp"


unsigned Eveniment::count = 0;


Eveniment::Eveniment (const string n, const string l, const Data dt, const unsigned dr) :
    nume(n), locatie(l), data(dt), durata(dr)
{
    count++;
    this->ID = "EV-I" + to_string(count);
}

ostream& operator<< (ostream& out, const Eveniment& e) {
    out << "Nume: "<< e.nume << endl;
    out << "Ora si data: " << e.data.ora << ":" << e.data.minut << ", "
        << e.data.zi << "/" << e.data.luna << "/" << e.data.an << endl;
    out << "Locatie: " << e.locatie << endl;
    out << "ID: " << e.ID << endl;
    out << "Durata: " << e.durata << " minute" << endl;
    return out;
}

istream& operator>> (istream& in, Eveniment& e) {
    string nume;
    in >> nume;

}