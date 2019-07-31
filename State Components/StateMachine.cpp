//
//  StateMachine.cpp
//  State Machine
//
//  Created by Zachary Duncan on 7/21/19.
//  Copyright © 2019 Zachary Duncan. All rights reserved.
//

#include "StateMachine.hpp"

void StateMachine::handle(Input* input)
{
    printf("\n\n[STATE MACHINE]  > Input: %s\n", typeid(input).name());
    
    for (int i = 0; i < stateObjects.size(); i++) {
        stateObjects[i]->handle(input);
        printf("[STATE MACHINE]  • %s is now %s\n", stateObjects[i]->getDescription().c_str(), stateObjects[i]->state()->getDescription().c_str());
    }
}

void StateMachine::addStateObject(StateObject* stateObject)
{
    stateObjects.push_back(stateObject);
}
