#ifndef CANDELABRU_H
#define CANDELABRU_H
#include "BecReglabil.h"

class Candelabru
{
    public:
        void ConfigureazaCandelabru(unsigned short nrBecuri);
        void AprindeLumina();
        void StingeLumina();
        void MaresteLumina(unsigned short par2);
        void ReduceLumina(unsigned short par3);
        unsigned short PutereMaximaCandelabru();
        unsigned short StareCandelabru();

        Candelabru();
        virtual ~Candelabru();

    protected:

    private:
          unsigned short nrBecuri;
        BecReglabil* listaBecuri;

};

#endif // CANDELABRU_H
