#include "menuitem.h"

MenuItem::MenuItem(std::string name) :
    AbstractMenuItem(name)
{

}

double MenuItem::price() const
{
    return mPrice;
}

std::string MenuItem::description() const
{
    return mDescription;
}

std::string MenuItem::ingredients() const
{
    return mIngredients;
}

void MenuItem::accept(Visitor &v)
{
    v.visit(this);
}

