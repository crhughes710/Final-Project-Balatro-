#include "BlueDeckPlayer.h"
#include <iostream>
#include "RedDeckPlayer.h"

BlueDeckPlayer::BlueDeckPlayer() {
    m_name = "Blue";
   // m_handSize = 8;
   // m_playerHands = 4;
    m_playerDiscards = 4; // Blue deck gets +1 player discards
    m_playerMoney = 5; // It also starts with 5 dollars
}

bool BlueDeckPlayer::applyInterest() {
    return false;
}