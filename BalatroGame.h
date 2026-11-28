#ifndef BALATRO_BALATROGAME_H
#define BALATRO_BALATROGAME_H
#include <memory>
#include <vector>
#include "Player.h"


class BalatroGame {
private:
    int choice;
    std::unique_ptr<Player> player;
    std::vector<int> m_anteScores;
    bool m_gameOver;
    bool m_win;
    void displayRules();
    void chooseDeck();
    public:
    BalatroGame();
    int roundStart(int,int,int); // (HandSize, PlayerHands, PlayerDiscards)


};


#endif //BALATRO_BALATROGAME_H
