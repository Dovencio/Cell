#ifndef COMPOUND_H
#define COMPOUND_H

#include "Include.h"

using namespace std;

class Compound
{
    public:
        Compound();
        virtual ~Compound();

        int GetGroupNum(int loc) { return Material[loc].num; }
        Element GetGroupEle(int loc) { return Material[loc].element; }

    protected:

    private:
        EGroup Material[20] = {};
};

#endif // COMPOUND_H
