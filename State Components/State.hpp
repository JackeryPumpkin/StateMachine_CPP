//
//  State.hpp
//  State Machine
//
//  Created by Zachary Duncan on 7/21/19.
//  Copyright © 2019 Zachary Duncan. All rights reserved.
//

#ifndef State_hpp
#define State_hpp

#include <string>
#include "Input.h"
class StateObject;

class State
{
public:
    /// Takes an Input that relates to the StateObject you're controlling. It will then
    /// determine and return the State that StateObject will be in next
    /// @param input Some input from the user trying to manipulate the StateObject
    /// @return The new State that the StateObject is in. It will be nil if the State is unchanged
    virtual State* handle(StateObject& stateObject, Input* input) const = 0;
    
    /// Runs only once upon entering this State
    /// @param stateObject The object that is being controlled by the StateMachine
    virtual void enter(StateObject& stateObject) = 0;
    
    /// Runs everytime this State handles an Input and is not exiting
    /// @param stateObject The object that is being controlled by the StateMachine
    virtual void update(StateObject& stateObject) = 0;
    
    /// Runs only once when changing State
    /// @param stateObject The object that is being controlled by the StateMachine
    virtual void exit(StateObject& stateObject) = 0;
    
    /// @return A brief string describing the State that the StateObject is in
    virtual std::string getDescription() const = 0;
    
    /// Sets a string used to describe the type of State this is
    /// @param newDesc A string that briefly describes the State - usually its class name
    virtual void setDescription(std::string newDesc) = 0;
    
    /// @return true if the left and right States have the same description
    virtual bool operator==(State* state) const { return getDescription() == state->getDescription(); }
    
    /// @return true if the left and right States do not have the same description
    virtual bool operator!=(State* state) const { return getDescription() != state->getDescription(); }
};

#endif /* State_hpp */
