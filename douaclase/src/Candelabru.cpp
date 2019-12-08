#include "Candelabru.h"
#include "BecReglabil.h"

Candelabru::Candelabru()
{
    //ctor
}

Candelabru::~Candelabru()
{
    //dtor
}

    void Candelabru::ConfigureazaCandelabru(unsigned short cateBecuri)
    {
        nrBecuri=cateBecuri;
        listaBecuri= new BecReglabil[nrBecuri];
            for (int i=0; i<nrBecuri; ++i)
            {
                listaBecuri[i].SetputereMaxima(100);
                listaBecuri[i].SetputereCurenta(0);
            }

    }

        void Candelabru::AprindeLumina()
    {
            for(short i=0; i<nrBecuri; ++i)
                listaBecuri[i].Aprinde();
    }
            void Candelabru::StingeLumina()
        {
            for(short i=0; i<nrBecuri; ++i)
                listaBecuri[i].Stinge();
        }

        void Candelabru::MaresteLumina(unsigned short par2)
        {
            for (short i=0; i<nrBecuri; ++i)
            {
                listaBecuri[i].MaresteLumina(par2);
            }
        }

        void Candelabru::ReduceLumina(unsigned short par3)
        {
            for (short i=0; i<nrBecuri; ++i)
            {
                listaBecuri[i].ReduceLumina(par3);
            }
        }

        unsigned short Candelabru::PutereMaximaCandelabru()
        {
            for (short i=0; i<nrBecuri; ++i)
            {
                int suma=0;
                suma+= listaBecuri[i].GetputereMaxima();
                return suma;
            }
        }

        unsigned short Candelabru::StareCandelabru()
        {
            for (short i=0; i<nrBecuri; ++i)
            {
                if (listaBecuri[i].GetputereCurenta()>0)
                    return true;
                else return false;
            }
        }
