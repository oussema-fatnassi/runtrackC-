#include <iostream>
#include <string>
using namespace std;

class Player
{
    private:
        int x;
        int y;
        string name;

    public:
        Player() : x(0), y(0), name("DefaultName") {};
        Player(int x, int y) : x(x), y(y), name("DefaultName") {};
        Player(int x, int y, string name) : x(x), y(y), name(name) {};

        void initPlayer(int x, int y){
            this->x = x;
            this->y = y;
        };

        void getName() const {
            std::cout << "The player's name is : " << this -> name << std::endl;
        };

        void showPlayer() const {
            std::cout << "The player is in : x = " << this -> x << ", y = " << this -> y << std::endl;
        };

        void movePlayer(int deltaX, int deltaY){
            this -> x += deltaX;
            this -> y += deltaY;};

        ~Player() {};
};

