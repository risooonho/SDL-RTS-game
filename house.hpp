#ifndef HOUSE_HPP
#define HOUSE_HPP

#include "building.hpp"

class House : public Building
{
    public:
        House(SDL_Setup* sdl_setup, std::string FilePath, int x, int y, int size_x, int size_y, int passed_team, Environment* passed_environment);
        House() {}
        ~House();
        void Update();
        void constructing();

};

#endif // HOUSE_HPP
