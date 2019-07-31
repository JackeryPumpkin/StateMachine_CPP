//
//  Enemy.hpp
//  State Machine
//
//  Created by Zachary Duncan on 7/29/19.
//  Copyright © 2019 Zachary Duncan. All rights reserved.
//

#ifndef Enemy_hpp
#define Enemy_hpp

#include "StateObject.hpp"
#include "PlayerInput.hpp"

class Enemy: public StateObject
{
public:
    Enemy(State* initialState);
    void attack();
};

#endif /* Enemy_hpp */
