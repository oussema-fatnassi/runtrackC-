#include "player.hpp"
#include <iostream>

int main() {
    Player player1;
    Player player2(1, 1);
    Player player3(2, 2, "John");
    player1.showPlayer();
    player2.showPlayer();
    player3.showPlayer();
    player1.getName();
    player2.getName();
    player3.getName();
    return 0;
}