//
//  JumpingState.hpp
//  State Machine
//
//  Created by Zachary Duncan on 7/27/19.
//  Copyright © 2019 Zachary Duncan. All rights reserved.
//

#ifndef JumpingState_hpp
#define JumpingState_hpp

#include "PlayerState.hpp"
#include "PlayerInput.hpp"

class JumpingState: public PlayerState
{
public:
    JumpingState();
    
    virtual PlayerState* handle(StateObject& stateObject, Input* input) const override;
    virtual void enter(StateObject& stateObject) override;
    virtual void update(StateObject& stateObject) override;
    virtual void exit(StateObject& stateObject) override;
    
    virtual std::string getDescription() const override;
    virtual void setDescription(std::string desc) override;
};

#endif /* JumpingState_hpp */
