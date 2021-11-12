#include "TeamManager.h"

// create a team 
Team TeamManager::GenerateNewTeam(std::string TeamName)
{
	PlayerManager playermanager;
	HeroManager heromanager;

	Player newPlayerlist[5];
	Hero newHerolist[5];

	for (int i = 0; i < 5; i++)
	{
		newPlayerlist[i] = playermanager.RandPlayer();
		std::cout << newPlayerlist[i] << "\n";
		newHerolist[i] = heromanager.RandHero();
		std::cout << newHerolist[i] << "\n\n";

	}

	Team team(TeamName, newPlayerlist, newHerolist);
	return team;
}

Team TeamManager::GenerateNewTeamOne(std::string TeamName)
{
	PlayerManager playermanager = PlayerManager();
	HeroManager heromanager = HeroManager();

	Player newPlayerlist[5];
	Hero newHerolist[5];

	for (int i = 0; i < 5; i++)
	{
		newPlayerlist[i] = playermanager.RandPlayerOne();
		std::cout << newPlayerlist[i] << "\n";
		newHerolist[i] = heromanager.RandHeroOne();
		std::cout << newHerolist[i] << "\n\n";
	}

	Team team(TeamName, newPlayerlist, newHerolist);
	return team;
}

// team information 
void TeamManager::GetTeamInfo(Team& team)
{
	PlayerManager playermanager;
	HeroManager heromanager;

	std::cout << "Team: " << team.Name << "\n";
	std::cout << "Players" << "\n";
	for (auto element : team.Playerslist)
	{
		playermanager.ShowPlayerInfo(element);
	}

	std::cout << "Heroes" << "\n";
	for (auto element : team.Heroeslist)
	{
		heromanager.ShowHeroInfo(element);
	}
}