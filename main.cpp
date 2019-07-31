//
//  main.cpp
//  State Machine
//
//  Created by Zachary Duncan on 7/21/19.
//  Copyright © 2019 Zachary Duncan. All rights reserved.
//

#include "StateMachine.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include "PlayerState.hpp"
#include "StandingState.hpp"
#include "WalkingState.hpp"

int main(int argc, const char * argv[]) {
    StateMachine stateMachine = StateMachine();
    State* standing = new StandingState;
    State* walking = new WalkingState;
    StateObject* player = new Player(standing);
    StateObject* enemy = new Enemy(walking);
    
    stateMachine.addStateObject(player);
    stateMachine.addStateObject(enemy);
    stateMachine.handle(PlayerInput::jump);
    stateMachine.handle(PlayerInput::land);
    stateMachine.handle(PlayerInput::magicCharge);
    stateMachine.handle(PlayerInput::magicCharge);
    stateMachine.handle(PlayerInput::magicCharge);
    stateMachine.handle(PlayerInput::magicCharge);
    stateMachine.handle(PlayerInput::magicCharge_release);
    
    return 0;
}
