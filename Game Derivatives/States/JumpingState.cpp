//
//  JumpingState.cpp
//  State Machine
//
//  Created by Zachary Duncan on 7/27/19.
//  Copyright © 2019 Zachary Duncan. All rights reserved.
//

#include "JumpingState.hpp"
#include "StandingState.hpp"

JumpingState::JumpingState()
{
    setDescription("Jumping");
}

PlayerState* JumpingState::handle(StateObject& stateObject, Input* input) const
{
    if (input == PlayerInput::land) {
        return new StandingState;
    }
    
    return nullptr;
}

void JumpingState::enter(StateObject& stateObject)
{
    
}

void JumpingState::update(StateObject& stateObject)
{
    
}

void JumpingState::exit(StateObject& stateObject)
{
    
}

std::string JumpingState::getDescription() const
{
    return desc;
}

void JumpingState::setDescription(std::string newDesc)
{
    desc = newDesc;
}
