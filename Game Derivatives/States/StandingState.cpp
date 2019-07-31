//
//  StandingState.cpp
//  State Machine
//
//  Created by Zachary Duncan on 7/27/19.
//  Copyright © 2019 Zachary Duncan. All rights reserved.
//

#include "StandingState.hpp"
#include "JumpingState.hpp"
#include "ChargingState.hpp"

StandingState::StandingState()
{
    setDescription("Standing");
}

PlayerState* StandingState::handle(StateObject& stateObject, Input* input) const
{
    if (input == PlayerInput::jump) {
        return new JumpingState;
    } else if (input == PlayerInput::magicCharge) {
        return new ChargingState;
    }
    
    return nullptr;
}

void StandingState::enter(StateObject& stateObject)
{
    
}

void StandingState::update(StateObject& stateObject)
{
    
}

void StandingState::exit(StateObject& stateObject)
{
    
}

std::string StandingState::getDescription() const
{
    return desc;
}

void StandingState::setDescription(std::string newDesc)
{
    desc = newDesc;
}
