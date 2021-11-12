#pragma once
#include "Player.h"
#include "Hero.h"

class Team
{
public:
	std::string Name;
	Player Playerslist[5];
	Hero Heroeslist[5];


	Team() {}
	Team(std::string name)
	{
		this->Name = name;
	}
	// create a team 
	Team(std::string name, Player playersList[5], Hero heroesList[5]);


};
