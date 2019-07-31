//
//  WalkingState.cpp
//  State Machine
//
//  Created by Zachary Duncan on 7/27/19.
//  Copyright © 2019 Zachary Duncan. All rights reserved.
//

#include "WalkingState.hpp"
#include "JumpingState.hpp"

WalkingState::WalkingState()
{
    setDescription("Walking");
}

PlayerState* WalkingState::handle(StateObject& stateObject, Input* input) const
{
    if (input == PlayerInput::jump) {
        return new JumpingState;
    }
    
    return nullptr;
}

void WalkingState::enter(StateObject& stateObject)
{
    
}

void WalkingState::update(StateObject& stateObject)
{
    
}

void WalkingState::exit(StateObject& stateObject)
{
    
}

std::string WalkingState::getDescription() const
{
    return desc;
}

void WalkingState::setDescription(std::string newDesc)
{
    desc = newDesc;
}
