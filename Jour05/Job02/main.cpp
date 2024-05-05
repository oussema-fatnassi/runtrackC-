#include "player.hpp"
#include <iostream>

int main() {
    Player player(0, 0);
    player.initPlayer(0, 0);
    player.showPlayer();
    player.movePlayer(3, 4);
    player.showPlayer();
    player.movePlayer(-1, -1);
    player.showPlayer();
    return 0;
}