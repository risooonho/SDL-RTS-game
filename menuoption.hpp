#ifndef MENUOPTION_HPP
#define MENUOPTION_HPP
#include "imports.hpp"
#include "sprite.hpp"
#include "building.hpp"
#include <vector>

class MenuOption
{
public:
    MenuOption(int kind, int price, std::string picString);
    MenuOption();
    ~MenuOption();

    std::string getPic();
    int getType();
    int getCost();

    bool selected;

private:

    int type;
    int cost;

    std::string pic;


};


#endif // MENUOPTION_HPP
