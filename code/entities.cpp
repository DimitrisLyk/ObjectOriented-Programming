#include <cstdlib>
#include <iostream>
#include <vector>
#include "entities.h"

//vector<vector<char>> world(10, vector<char>(10));
// Define the symbols used to represent different elements in the world
const char TERRAIN_SYMBOL = 'T';
const char WATER_SYMBOL = 'W';
const char TREE_SYMBOL = 'X';

// Define the probability of each element appearing in the world
const float TERRAIN_PROBABILITY = 0.6;
const float WATER_PROBABILITY = 0.2;
const float TREE_PROBABILITY = 0.2;

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

/*Map::Map(){
  unsigned short int X, Y;
  vector<vector<char>> world(X, vector<char>(Y));


}*/
//unsigned short int X, Y;/vector<vector<char>> world(int X, vector<char>(Y));
void Map::MapGenerator(Map& map){
    GenerateMap(map);
}

void Map::MapPrinter(Map& map){
   PrintMap(map);
}

void Map::GenerateMap(Map& map){
  unsigned short int X, Y;
  cout <<  "Enter dimensions" <<endl;
  cin >> X >> Y;
  // Resize the vector to have the desired number of rows
  map.world.resize(X);

  // Loop through each row of the vector and resize it to have the desired number of columns
  for (int i = 0; i < X; i++)
  {
    map.world[i].resize(Y);
  }
    // Create a two-dimensional vector to represent the world
  //vector<vector<char>> map.wor (X, vector<char>(Y));
  //int world[X][Y];
    // Initialize the world with terrain, water, and trees according to their probabilities
  for (int i = 0; i < X; i++)
  {
    for (int j = 0; j < Y; j++)
    {
      float z = (float) rand() / RAND_MAX;

      if (z <= TERRAIN_PROBABILITY)
      {
        map.world[i][j] = TERRAIN_SYMBOL;
      }
      else if (z <= WATER_PROBABILITY + TERRAIN_PROBABILITY)
      {
        map.world[i][j] = WATER_SYMBOL;
      }
      else
      {
       map.world[i][j] = TREE_SYMBOL;
      }
    }
  }
}

void Map::PrintMap(Map& map) const{
  for (int i = 0; i < map.world.size(); i++)
  {
    for (int j = 0; j < map.world[i].size(); j++)
    {
      cout << map.world[i][j] << " ";
    }
    cout << endl;
  }

}

