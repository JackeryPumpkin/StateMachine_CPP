//
//  StateObject.cpp
//  State Machine
//
//  Created by Zachary Duncan on 7/21/19.
//  Copyright © 2019 Zachary Duncan. All rights reserved.
//

#include "StateObject.hpp"
#include <assert.h>
#include "StandingState.hpp"

StateObject::StateObject(State* initialState)
{
    assert(initialState != NULL);
    currentState = initialState;
    desc = "StateObject";
}

void StateObject::handle(Input* input)
{
    State* newState = currentState->handle(*this, input);
    
    if (newState == new StandingState()) {
        printf("Comparison Worked!");
    }
    
    if (newState != NULL) {
        setLastState(currentState);
        currentState->exit(*this);
        currentState = newState;
        currentState->enter(*this);
    }
    
    currentState->update(*this);
}

State* StateObject::state()
{
    return currentState;
}

void StateObject::toFirstState()
{
    if (firstState == nullptr) { return; }
    setLastState(currentState);
    currentState->exit(*this);
    currentState = firstState;
    currentState->enter(*this);
    currentState->update(*this);
}

void StateObject::toLastState()
{
    if (lastState == nullptr) { return; }
    currentState->exit(*this);
    currentState = lastState;
    currentState->enter(*this);
    currentState->update(*this);
}

void StateObject::forceState(State* newState)
{
    if (newState == nullptr) { return; }
    if (lastState == newState) {
        toLastState();
    } else if (newState != currentState) {
        setLastState(currentState);
        currentState->exit(*this);
        currentState = newState;
        currentState->enter(*this);
        currentState->update(*this);
    }
}

void StateObject::setLastState(State *state)
{
    // Ensures the incoming State will not overwrite a State of the same
    // type so its stored properties will be preserved for use when reverting to lastState
    if (state != lastState) {
        lastState = state;
    }
}

std::string StateObject::getDescription()
{
    return desc;
}

void StateObject::setDescription(std::string newDesc)
{
    desc = newDesc;
}
