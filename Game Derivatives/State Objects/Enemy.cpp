//
//  Enemy.cpp
//  State Machine
//
//  Created by Zachary Duncan on 7/29/19.
//  Copyright © 2019 Zachary Duncan. All rights reserved.
//

#include "Enemy.hpp"

Enemy::Enemy(State* initialState):StateObject(initialState)
{
    setDescription("Enemy");
}

void Enemy::attack()
{
    printf("Enemy Attacks!\n");
}
