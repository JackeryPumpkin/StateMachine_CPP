//
//  PlayerInput.hpp
//  State Machine
//
//  Created by Zachary Duncan on 7/21/19.
//  Copyright © 2019 Zachary Duncan. All rights reserved.
//

#ifndef PlayerInput_hpp
#define PlayerInput_hpp

#include <stdio.h>
#include "Input.h"


class PlayerInput
{
public:
    static Input* up;
    static Input* up_release;
    static Input* down;
    static Input* down_release;
    static Input* left;
    static Input* left_release;
    static Input* right;
    static Input* right_release;
    static Input* jump;
    static Input* jump_release;
    static Input* land;
    static Input* sprint;
    static Input* sprint_release;
    static Input* crouch;
    static Input* crouch_release;
    static Input* melee;
    static Input* magic;
    static Input* magicCharge;
    static Input* magicCharge_release;
    static Input* menu;
    static Input* pause;
};

#endif /* PlayerInput_hpp */
