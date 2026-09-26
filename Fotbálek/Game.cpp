//
//  Game.cpp
//  Fotbálek
//
//  Created by Martin Slavíček on 22.09.2026.
//

#include "Game.hpp"

#include <iostream>

Game::Game() {
    m_playerTurn = true;
    m_play = true;
    m_vocabulary = new Dictionary();
};

Game::~Game() {
     delete m_vocabulary;
};

void Game::play() {
    std::cout << "Slovni Fotbal" << std::endl;
    std::string noveSlovo = m_vocabulary->firstWord();
    std::cout << "PC Vykopl Slovo: " << noveSlovo << std::endl;
    setPreviousWord(noveSlovo);
    std::string slovo = " ";
    while (m_play) {
        if (m_playerTurn) {
            std::cout << "Zadejte slovo:" << std::endl;
            std::string slovo;
            std::cin >> slovo;
            if (isPlayAble(slovo)) {
                setPreviousWord((slovo));
                m_playerTurn = false;
            } else {
                std::cout << "Slovo: "<< slovo << " Neni hratelne!! Prohal jste." << std::endl;
                m_play = false;
            }
        } else {
            if (m_vocabulary->findNextWord(m_previousWord, slovo)) {
                setPreviousWord(slovo);
                std::cout << "PC Vykopl Slovo: " << slovo << std::endl;
                m_playerTurn = true;
            } else {
                std::cout << "Pc byl porazen!!" << std::endl;
                m_play = false;
            }
        }
    }
};

void Game::setPreviousWord(std::string newWord) {
    m_previousWord = newWord;
};

bool Game::isPlayAble(std::string playedWord) {
    if (playedWord.starts_with(m_previousWord.back())) {
        return true;
    } else {
        return false;
    }
};

bool Game::getPlayerTurn() {
    return m_playerTurn;
};