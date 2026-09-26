//
//  Dictionary.cpp
//  Fotbálek
//
//  Created by Martin Slavíček on 22.09.2026.
//

#include "Dictionary.hpp"
#include <iostream>
#include <random>
#include <ctime>

std::string Dictionary::firstWord() {
    srand(time(nullptr));
    int max = m_dictionary.size() - 1;
    int nahoneCislo = rand() % max+1;
    //std::cout << RAND_MAX << '\n';
    return m_dictionary.at(nahoneCislo);
};

bool Dictionary::findNextWord(std::string prevWord, std::string &followingWord){
    for (int i=0; i<m_dictionary.size(); i++) {
        if (m_dictionary.at(i).starts_with(prevWord.back())) {
            followingWord = m_dictionary.at(i);
            m_dictionary.erase(m_dictionary.begin() + i);
            return true;
        }
    }
    return false;
};
