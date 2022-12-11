#include <cstdlib>

#include <iostream>

#include "entities.h"

using namespace std;

void Entity::InitializeAbilities(){
    
    health = rand() % 3;
    attack = rand() % 3 + 1;
    defence = rand() % 2 + 1;
}

void Entity::UpdatePosition(int dx, int dy) {
    x += dx;
    y += dy;
}

void Map::MapGenerator(){
    GenerateTerrain();
    GenerateWater();
    GenerateTrees();
}

