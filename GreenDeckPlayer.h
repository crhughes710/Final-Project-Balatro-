#include "Player.h"
#ifndef BALATRO_GREENDECKPLAYER_H
#define BALATRO_GREENDECKPLAYER_H


class GreenDeckPlayer: public Player {
protected:
public:
    GreenDeckPlayer();
    bool applyInterest() override;
};


#endif //BALATRO_GREENDECKPLAYER_H
