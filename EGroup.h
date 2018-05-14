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

        Element GetElement() { return element; }
        void SetElement(Element val) { element = val; }
        int Getnum() { return num; }
        void Setnum(int val) { num = val; }

    protected:

    private:
        Element ele;
        int num;
};

#endif // EGROUP_H
