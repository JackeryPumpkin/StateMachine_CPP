//
//  WalkingState.hpp
//  State Machine
//
//  Created by Zachary Duncan on 7/27/19.
//  Copyright © 2019 Zachary Duncan. All rights reserved.
//

#ifndef WalkingState_hpp
#define WalkingState_hpp

#include "PlayerState.hpp"
#include "PlayerInput.hpp"

class WalkingState: public PlayerState
{
public:
    WalkingState();
    
    virtual PlayerState* handle(StateObject& stateObject, Input* input) const override;
    virtual void enter(StateObject& stateObject) override;
    virtual void update(StateObject& stateObject) override;
    virtual void exit(StateObject& stateObject) override;
    
    virtual std::string getDescription() const override;
    virtual void setDescription(std::string desc) override;
};

#endif /* WalkingState_hpp */
