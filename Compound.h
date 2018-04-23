#ifndef COMPOUND_H
#define COMPOUND_H

#include "Classheader.h"
#include "EGroup.h"

using namespace std;

class Compound
{
    public:
        Compound();
        virtual ~Compound();

        int GetGroupNum(int loc) { return Material[loc].Getnum(); }
        Element GetGroupEle(int loc) { return Material[loc].GetElement(); }

    protected:

    private:
        EGroup Material[20];
};

#endif // COMPOUND_H
