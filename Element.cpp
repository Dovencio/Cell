#include "Element.h"

Element::Element(string Nname, int Nnumber, int Nweight, bool poison)
{
    this->Setname(Nname);
    this->Setnumber(Nnumber);
    this->Setweight(Nweight);
    this->SetIsPoison(poison);
}

Element::~Element()
{
    //dtor
}
