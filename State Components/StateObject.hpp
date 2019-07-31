//
//  StateObject.hpp
//  State Machine
//
//  Created by Zachary Duncan on 7/21/19.
//  Copyright © 2019 Zachary Duncan. All rights reserved.
//

#ifndef StateObject_hpp
#define StateObject_hpp

#include <string>
#include "Input.h"
#include "State.hpp"

class StateObject
{
public:
    /// This sets the new StateObject to a specified State
    StateObject(State* initialState);
    
    /// Takes an Input and determines which State the StateObject should be in next
    /// @param input Some input from the user trying to manipulate the StateObject
    void handle(Input* input);
    
    /// Returns the StateObject's current state
    State* state();
    
    /// Reverts the StateObject to its first State
    void toFirstState();
    
    /// Reverts the StateObject to its previous State
    void toLastState();
    
    /// Forces the StateObject into the given State
    /// @param state An explicit State for the StateObject to inhabit
    void forceState(State* state);
    
    /// A brief string describing the type of StateObject this is
    std::string getDescription();

    /// Sets a string used to describe the type of StateObject this is
    /// @param desc A string that briefly describes the StateObject - usually its class name
    void setDescription(std::string desc);
    
private:
    State* firstState;
    State* lastState;
    State* currentState;
    
    /// This is just a helper function for safely setting the last
    /// State to a given State without it being the same as the current one
    void setLastState(State* state);
    
    std::string desc;
};

#endif /* StateObject_hpp */
