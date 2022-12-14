using namespace std;

class Entity{
    private:
        unsigned short int health;
        unsigned short int attack;
        unsigned short int defence;
        unsigned short int x;
        unsigned short int y;

    public:
        unsigned short int get_health() const { return health; }
        unsigned short int get_attack() const { return attack; }
        unsigned short int get_defence() const { return defence;}
        unsigned short int get_x() const { return x;}
        unsigned short int get_y() const { return y;};

        void InitializeAbilities();
        void UpdatePosition(int dx, int dy);

};


class Map{
    private:
        //unsigned short int X, Y;
        //Map(int width, int height) : X(width), Y(height) {}
        
        //unsigned short int get_X() const { return X; }
        //unsigned short int get_Y() const { return Y; };
        //vector<vector<char>> world;
        void GenerateMap(Map& map);
        void PrintMap(Map& map) const;
    public:
        //Map();
        //~Map();
        vector<vector<char>> world;
        void MapGenerator(Map& map);
        void MapPrinter(Map& map);

};



class Werewolf : public Entity{
    //public:
        //Werewolf() : Animal() {}


};

class Vampire : public Entity{

};

class Avatar : public Entity{
        
};