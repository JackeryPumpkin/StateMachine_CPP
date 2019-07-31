//
//  Player.cpp
//  State Machine
//
//  Created by Zachary Duncan on 7/24/19.
//  Copyright © 2019 Zachary Duncan. All rights reserved.
//

#include "Player.hpp"

Player::Player(State* initialState):StateObject(initialState)
{
    setDescription("Player");
}

int Player::getMagicCharge() { return magicCharge; }
void Player::increaseMagicCharge() { magicCharge++; }
void Player::jump() {}
void Player::sprint() {}
void Player::crouch() {}
void Player::melee() {}
void Player::downAirMelee() {}
void Player::neutralAirMelee() {}
void Player::powerMelee() {}
void Player::magic() {
    printf("Standard magic attack\n");
}

void Player::powerMagic() {
    printf("Magic attack with %i power\n", magicCharge);
    magicCharge = 0;
}
