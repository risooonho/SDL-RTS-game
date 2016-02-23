#ifndef BUILDING_HPP
#define BUILDING_HPP
#include "imports.hpp"
#include "sdl_setup.hpp"
#include "sprite.hpp"

class Building
{
    public:
        Building(SDL_Setup* sdl_setup, std::string FilePath, int x, int y);
        Building() {}
        ~Building();

        void DrawBuilding();

        int getStructureX();
        int getStructureY();
        int getStructureW();
        int getStructureH();

        void Select();

        Sprite* GetBuilding() { return Structure; }
        void SetBuilding();

        bool selected;

        void setSelected() { selected = true; }
        void unSelect() { selected = false; }

        void Update();

    private:
        Sprite* Structure;
};

#endif // BUILDING_HPP
