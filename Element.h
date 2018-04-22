#ifndef ELEMENT_H
#define ELEMENT_H

#include "Include.h"

using namespace std;

class Element
{
    public:
        Element();
        virtual ~Element();

        string Getname() { return name; }
        void Setname(string val) { name = val; }
        int Getweight() { return weight; }
        void Setweight(int val) { weight = val; }
        int Getnumber() { return number; }
        void Setnumber(int val) { number = val; }
        bool GetIsPoison() { return isPoison; }
        void SetIsPoison(bool val) { isPoison = val; }

    protected:

    private:
        string name;
        int weight;
        int number;
        bool isPoison;
};

#endif // ELEMENT_H
