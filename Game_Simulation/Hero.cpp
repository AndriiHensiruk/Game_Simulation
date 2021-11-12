#include "Hero.h"

Hero::Hero(int id, std::string name, int HP, int damage)
{
    this->ID = id;
    this->Name = name;
    this->HP = HP;
    this->Damage = damage;
}

std::string Hero::GetName()
{
    return Name;
};

int Hero::GetId()
{
    return ID;
};

int Hero::GetDamage()
{
    return Damage;
}

int Hero::GetHP()
{
    return HP;
}

int Hero::SetHP(int hp)
{
    this->HP = hp;
    return hp;
}

std::ostream& operator<< (std::ostream& uot, const Hero& hero)
{
    uot << "Name hero\t" << hero.Name << "\tDamage\t" << hero.Damage << "\tHP\t" << hero.HP;
    return uot;
}