#include "eveniment.hpp"


unsigned Eveniment::count = 0;

Eveniment::Eveniment() {
    count++;
    this->ID = "EV-I" + to_string(count);
}

Eveniment::Eveniment(const string n, const string l, const Data dt, const unsigned dr) :
    Eveniment(); nume(n), locatie(l), data(dt), durata(dr)
{
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
    in >> e.nume;
    in >> e.data.minut >> e.data.ora >> e.data.zi >> e.data.luna >> e.data.an;
    in >> e.locatie;
    in >> e.durata;
    return in;
}