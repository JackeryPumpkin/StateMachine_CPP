//
//  Player.hpp
//  State Machine
//
//  Created by Zachary Duncan on 7/21/19.
//  Copyright © 2019 Zachary Duncan. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include "StateObject.hpp"
#include "PlayerInput.hpp"

class Player: public StateObject
{
public:
    Player(State* initialState);
    int getMagicCharge();
    void increaseMagicCharge();
    
    void jump();
    void sprint();
    void crouch();
    void melee();
    void downAirMelee();
    void neutralAirMelee();
    void powerMelee();
    void magic();
    void powerMagic();
    
private:
    int magicCharge = 0;
    const int maxMagicCharge = 10;
};

#endif /* Player_hpp */
