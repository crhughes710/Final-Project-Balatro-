#ifndef BALATRO_BLUEDECKPLAYER_H
#define BALATRO_BLUEDECKPLAYER_H
#include "Player.h"

class BlueDeckPlayer: public Player {
public:
    BlueDeckPlayer();
    bool applyInterest() override;
};

#endif //BALATRO_BLUEDECKPLAYER_H
