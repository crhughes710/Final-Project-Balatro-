#include "Player.h"
#include <string>

Player::Player() {
    m_name = "Name";
    m_handSize = 8;
    m_playerHands = 4;
    m_playerDiscards = 3;
    m_playerMoney = 0;
}
int Player::getHS() {
    return m_handSize;
}
int Player::getPH() {
    return m_playerHands;
}
int Player::getPD() {
    return m_playerDiscards;
}
std::string Player::getName() {
    return m_name;
}
int Player::getPM() {
    return m_playerMoney;
}