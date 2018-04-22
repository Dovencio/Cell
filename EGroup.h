#ifndef EGROUP_H
#define EGROUP_H

#include "Include.h"

using namespace std;

class EGroup
{
    public:
        EGroup();
        virtual ~EGroup();

        Element GetElement() { return element; }
        void SetElement(Element val) { element = val; }
        string Getnum() { return num; }
        void Setnum(string val) { num = val; }

    protected:

    private:
        Element element;
        string num;
};

#endif // EGROUP_H
