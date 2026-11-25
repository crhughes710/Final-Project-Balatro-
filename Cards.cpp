#include "Cards.h"

Cards::Cards()
{
    m_suit = "Hearts";
    m_rank = 2;
}

int Cards::calculateChips()
{
    if (m_rank == 14)
    {
        return 11;
    }

    if (m_rank >= 11)
    {
        return 10;
    }

    return m_rank;
}

std::string Cards::getSuit()
{
    return m_suit;
}

int Cards::getRank()
{
    return m_rank;
}