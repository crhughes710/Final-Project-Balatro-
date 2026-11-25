#include <iostream>
#include "Cards.h"

int main()
{
    Cards card;

    std::cout << "Suit: " << card.getSuit() << '\n';
    std::cout << "Rank: " << card.getRank() << '\n';
    std::cout << "Chips: " << card.calculateChips() << '\n';

    return 0;
}
