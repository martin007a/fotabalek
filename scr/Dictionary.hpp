//
//  Dictionary.hpp
//  Fotbálek
//
//  Created by Martin Slavíček on 22.09.2026.
//

#ifndef Dictionary_hpp
#define Dictionary_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <random>

class Dictionary {
private:
    std::vector<std::string> m_dictionary = {
        "auto", "okno", "strom", "mesto", "kocka", "pes", "dum",
        "les", "more", "reka", "trava", "slunce", "mesic", "hvezda",
        "stul", "zidle", "pocitac", "kniha", "skola", "prace"
    };
public:
    std::string firstWord();
    bool findNextWord(std::string prevWord, std::string &followingWord);
};
#endif /* Dictionary_hpp */
