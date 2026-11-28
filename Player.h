#ifndef BALATRO_PLAYER_H
#define BALATRO_PLAYER_H
#include <string>


class Player {
protected:
    std::string m_name;
    int m_handSize{};
    int m_playerHands{};
    int m_playerDiscards{};
    int m_playerMoney{};
public:
    Player();
    virtual ~Player() = default;
    int getHS();
    int getPH();
    int getPD();
    std::string getName();
    int getPM();
    virtual bool applyInterest() = 0;
};


#endif //BALATRO_PLAYER_H
