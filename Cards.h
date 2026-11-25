#ifndef CARDS_H
#define CARDS_H

#include <string>

class Cards
{
private:
    std::string m_suit;
    int m_rank;

public:
    Cards();
    int calculateChips();
    std::string getSuit();
    int getRank();
};

#endif