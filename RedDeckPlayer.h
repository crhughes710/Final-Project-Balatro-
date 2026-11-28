#ifndef BALATRO_REDDECKPLAYER_H
#define BALATRO_REDDECKPLAYER_H
#include "Player.h"


class RedDeckPlayer: public Player {
public:
    RedDeckPlayer();
    bool applyInterest() override;
};

#endif //BALATRO_REDDECKPLAYER_H
