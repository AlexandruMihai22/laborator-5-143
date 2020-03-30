#ifndef _EVENIMENT_H_
#define _EVENIMENT_H_

#include <string>

using namespace std;


class Eveniment {
public: 
    struct Data {
        unsigned minut, ora, zi, luna, an;
    };

protected:
    string nume;
    Data data;
    string locatie;
    string ID;
    unsigned durata; // in minute
    static unsigned count;

public:
    Eveniment (const string, const string, const Data, const unsigned = 60);

    friend ostream& operator<< (ostream&, const Eveniment&);
    friend istream& operator>> (istream&, const Eveniment&);
};


#endif // _EVENIMENT_H_