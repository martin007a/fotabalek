//
//  Game.hpp
//  Fotbálek
//
//  Created by Martin Slavíček on 22.09.2026.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include "Dictionary.hpp"

class Game {
private:
    Dictionary* m_vocabulary;
    bool m_playerTurn;
    bool m_play;
    std::string m_previousWord;
public:
    Game();
    ~Game();
    
    void play();
    bool getPlayerTurn();
    void setPreviousWord(std::string newWord);
    bool isPlayAble(std::string playedWord);
};

#endif
