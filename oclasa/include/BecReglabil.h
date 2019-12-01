#ifndef BECREGLABIL_H
#define BECREGLABIL_H


class BecReglabil
{
    public:
        BecReglabil();
        void SetputereMaxima(unsigned short nouMaxima);
        void SetputereCurenta (unsigned short nouCurenta);
        unsigned short GetputereMaxima();
        unsigned short GetputereCurenta();
        void Aprinde();
        void Stinge();
        void MaresteLumina(short par);
        void ReduceLumina (short param);
        void StareaBec();
            void AfisarePutereCurenta();
        virtual ~BecReglabil();

    protected:

    private:
        unsigned short putereMaxima;
        unsigned short putereCurenta;
        bool aprins;
};

#endif // BECREGLABIL_H
