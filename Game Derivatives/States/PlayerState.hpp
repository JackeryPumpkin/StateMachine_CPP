//
//  PlayerState.hpp
//  State Machine
//
//  Created by Zachary Duncan on 7/21/19.
//  Copyright © 2019 Zachary Duncan. All rights reserved.
//

#ifndef PlayerState_hpp
#define PlayerState_hpp

#include "State.hpp"

class PlayerState: public State
{
public:
    virtual PlayerState* handle(StateObject& stateObject, Input* input) const override
    {
        return nullptr;
    }

    virtual void enter(StateObject& stateObject) override
    {
    }

    virtual void update(StateObject& stateObject) override
    {
    }

    virtual void exit(StateObject& stateObject) override
    {
    }
    
protected:
    std::string desc;
};

#endif /* StandingState_hpp */
