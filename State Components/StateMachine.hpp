//
//  StateMachine.hpp
//  State Machine
//
//  Created by Zachary Duncan on 7/21/19.
//  Copyright © 2019 Zachary Duncan. All rights reserved.
//

#ifndef StateMachine_hpp
#define StateMachine_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include "Input.h"
#include "StateObject.hpp"

using namespace std;

class StateMachine {
public:
    /// This takes an input and runs it through each StateObject added with
    /// void addStateObject(StateObject* stateObject)
    void handle(Input* input);
    
    /// Adds a StateObject to the cycle of Input handling
    void addStateObject(StateObject* stateObject);
    
private:
    vector<StateObject*> stateObjects;
};

#endif /* StateMachine_hpp */
