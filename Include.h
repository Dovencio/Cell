#ifndef INCLUDE_H_INCLUDED
#define INCLUDE_H_INCLUDED

// STD lib files
#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>

// Header files
#include "Element.h"
#include "EGroup.h"
#include "Compound.h"
#include "Cell.h"
#include "Enviroment.h"

using namespace std;

void Delay(int h, int m, int s, int ms) // h, hours, m minuets, s seconds, ms milliseconds
{
    int totalMS = h*3600000+m*60000+s*1000+ms;
    Sleep(totalMS);
}

#endif // INCLUDE_H_INCLUDED
