#include "GameManager.h"
#include "TeamManager.h"
#include "Team.h"


void GameManager::PerformGameSession()
{
	std::cout << "Start Game" << "\n\n";
	std::string name_team_one = "Evil Geniuses";
	std::string name_team_two = "Alliance";
	TeamManager teamManager;

	std::cout << "First team:\t" << name_team_one << "\n\n";
	Team team1 = teamManager.GenerateNewTeam(name_team_one);


	std::cout << "\nSecond team:\t" << name_team_two << "\n\n";
	Team team2 = teamManager.GenerateNewTeamOne(name_team_two);


	Session session;
	session.TeamOne = team1;
	session.TeamTwo = team2;

	// determine the winner 
	session.CalculateWinner();


	GameSessions.push_back(session);


	// change the player's rating 
	AddRank(session.Winner);
	RemoveRank(session.Loser);
	std::cout << "\n\n";

	std::cout << "Information about the teams after the game session \n\n";
	teamManager.GetTeamInfo(session.Winner);
	std::cout << "\n\n";

	teamManager.GetTeamInfo(session.Loser);
	std::cout << "\n";



}

void GameManager::AddRank(Team& winnerTeam)
{
	for (auto& player : winnerTeam.Playerslist)
	{
		player.SetRank(player.GetRank() + 25);
	}
}

void GameManager::RemoveRank(Team& looserTeam)
{
	for (auto& player : looserTeam.Playerslist)
	{
		player.SetRank(player.GetRank() - 25);
	}
}