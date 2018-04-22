#ifndef ENVIROMENT_H
#define ENVIROMENT_H

#include "Include.h"

class Enviroment
{
    public:
        Enviroment();
        virtual ~Enviroment();

    protected:

    private:
        EGroup Materials[60] = {};
};

#endif // ENVIROMENT_H
