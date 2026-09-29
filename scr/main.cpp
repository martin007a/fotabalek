//
//  main.cpp
//  Fotbálek
//
//  Created by Martin Slavíček on 22.09.2026.
//

#include <iostream>
#include "Game.hpp"

int main(int argc, const char * argv[]) {
    Game* game = new Game();
    game->play();

    delete game;
    
    return EXIT_SUCCESS;
}
