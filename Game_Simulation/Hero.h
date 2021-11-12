#pragma once
#include "Player.h"
#include <iostream>

class Hero
{
public:
    std::string Name;
    int ID;
    int HP;
    int Damage;

    Hero() {}
    Hero(int ID, std::string Name, int HP, int Damage);

    std::string GetName();
    int GetId();
    int GetDamage();
    int GetHP();

    int SetHP(int hp);

    friend std::ostream& operator<< (std::ostream& out, const Hero& hero);
};