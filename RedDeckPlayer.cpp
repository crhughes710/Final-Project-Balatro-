#include "RedDeckPlayer.h"

RedDeckPlayer::RedDeckPlayer() {
    m_name = "Red";
    //m_handSize = 8;
    m_playerHands = 5; // Red deck gets +1 starter player hand.
    //m_playerDiscards = 3;
    //m_playerMoney = 0;
}

bool RedDeckPlayer::applyInterest() {
    return false;
}