#include "building.hpp"

Building::Building(SDL_Setup* sdl_setup, std::string FilePath, int x, int y)
{
    Structure = new Sprite(sdl_setup->GetRenderer(), FilePath.c_str(), x, y, 75, 75, CollisionRectangle(0, 0, 75, 75));

}

Building::~Building()
{
    delete Structure;
}

void Building::DrawBuilding()
{
    Structure->Draw();
}

int Building::getStructureX(){
    return Structure->GetX();
}

int Building::getStructureY(){
    return Structure->GetY();
}
int Building::getStructureW(){
    return Structure->GetWidth();
}

int Building::getStructureH(){
    return Structure->GetHeight();
}