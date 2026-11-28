#include "GreenDeckPlayer.h"
#include <iostream>


GreenDeckPlayer::GreenDeckPlayer() {
    m_name = "Green";
    //m_handSize = 8;
    //m_playerHands = 4;
    //m_playerDiscards = 3;
}

bool GreenDeckPlayer::applyInterest() {
    std::cout << "Enjoy The Extra Money!" << std::endl;
    return true;
}
