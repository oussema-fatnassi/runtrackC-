#include <iostream>

class Player
{
    private:
        int x;
        int y;

    public:
        Player(int x, int y) : x(x), y(y) {};

        void initPlayer(int x, int y){
            this->x = x;
            this->y = y;
        };

        void showPlayer() const {
            std::cout << "The player is in : x = " << x << ", y = " << y << std::endl;
        };

        void movePlayer(int deltaX, int deltaY){
            x += deltaX;
            y += deltaY;};

        ~Player() {};
};

