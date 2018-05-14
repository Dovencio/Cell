#ifndef EGROUP_H
#define EGROUP_H

#include "Classheader.h"
#include "Element.h"

using namespace std;

class EGroup
{
    public:
        EGroup();
        virtual ~EGroup();

        Element GetElement() { return ele; }
        void SetElement(Element val) { ele = val; }
        int Getnumof() { return numof; }
        void Setnumof(int val) { numof = val; }

    protected:

    private:
        Element ele;
        int numof;
};

#endif // EGROUP_H
