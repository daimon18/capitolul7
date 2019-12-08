#include "BecReglabil.h"
#include <iostream>
using namespace std;

    void BecReglabil::SetputereMaxima(unsigned short nouMaxima)
    {
        putereMaxima=nouMaxima; //Modifică valoarea membrului respectiv să fie egală cu parametrul.
    }

    void BecReglabil::SetputereCurenta(unsigned short nouCurenta)
    {
        putereCurenta=nouCurenta; //Modifică valoarea membrului respectiv să fie egală cu parametrul.
    }

    unsigned short BecReglabil::GetputereMaxima()
    {
        return putereMaxima; //returneaza valoarea lui putereMaxima
    }

    unsigned short BecReglabil::GetputereCurenta()
    {
        return putereCurenta; //returneaza valoarea lui putereCurenta
    }

        void BecReglabil::Aprinde()
    {
        aprins=true; //pune aprins pe true
        putereCurenta=putereMaxima; //modifică valoarea lui putereCurenta să fie egal cu putereMaxima
    }

        void BecReglabil::Stinge()
    {
        aprins=false; //pune aprins pe false
        putereCurenta=0; //modifică valoarea lui putereCurenta să fie egal cu 0
    }

        void BecReglabil::MaresteLumina(short par) //primește un parametru de tip short
    {
            aprins=true; //pune aprins pe true
        putereCurenta=putereCurenta+par; //crește valoarea lui putereCurenta cu parametrul primit
            if(putereCurenta>putereMaxima) //dacă în urma adunării, putereCurenta > putereMaxima, modifică valoarea lui putereCurenta încât să fie egal cu putereMaxima
        {
           putereCurenta=putereMaxima;
        }
    }

        void BecReglabil::ReduceLumina(short param)
    {
        putereCurenta=putereCurenta-param; //scade din valoarea lui putereCurenta parametrul primit
        if (putereCurenta<0) //daca putereCurenta<0,pune-i valoarea 0
            {
                putereCurenta=0;
            }
        else if (putereCurenta=0) //daca putereCurenta e 0,pune aprins pe false
        {
             aprins=false;
        }

    }

        void BecReglabil::StareaBec()
        {
            if (aprins=true)
            {
                cout<<"Becul e aprins"<<endl;
            } //dacă aprins e true afișează „Becul e aprins”
            else if (aprins=false)
            {
                cout<<"Becul e stins"<<endl;
            }
            }//dacă aprins e false afișează „Becul e stins”
                void BecReglabil::AfisarePutereCurenta()
                {
                    cout<<"puterea curenta:"<<putereCurenta<<endl;
                }



BecReglabil::BecReglabil()
{
    //ctor
}

BecReglabil::~BecReglabil()
{
    //dtor
}
