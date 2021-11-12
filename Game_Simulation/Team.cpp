#include "Team.h"

Team::Team(std::string name, Player playersList[5], Hero heroesList[5])
{
	this->Name = name;

	for (int i = 0; i < 5; i++)
	{
		Playerslist[i] = playersList[i];
		Heroeslist[i] = heroesList[i];
	}
}