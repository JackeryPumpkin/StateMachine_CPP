//
//  ChargingState.cpp
//  State Machine
//
//  Created by Zachary Duncan on 7/27/19.
//  Copyright © 2019 Zachary Duncan. All rights reserved.
//

#include "ChargingState.hpp"
#include "StandingState.hpp"
#include "Player.hpp"

ChargingState::ChargingState()
{
    setDescription("Charging");
}

PlayerState* ChargingState::handle(StateObject& stateObject, Input* input) const
{
    if (input == PlayerInput::magicCharge_release) {
        return new StandingState;
    }
    
    return nullptr;
}

void ChargingState::enter(StateObject& stateObject)
{
    
}

void ChargingState::update(StateObject& stateObject)
{
    if (stateObject.getDescription() == "Player") {
        Player* player = (Player*)&stateObject;
        
        player->increaseMagicCharge();
    }
    
    if (stateObject.getDescription() == "Enemy") {
        stateObject.toLastState();
    }
}

void ChargingState::exit(StateObject& stateObject)
{
    if (stateObject.getDescription() == "Player") {
        Player* player = (Player*)&stateObject;
        
        player->powerMagic();
    }
}

std::string ChargingState::getDescription() const
{
    return desc;
}

void ChargingState::setDescription(std::string newDesc)
{
    desc = newDesc;
}
