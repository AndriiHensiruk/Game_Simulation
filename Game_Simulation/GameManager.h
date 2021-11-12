#pragma once
#include "Session.h"
#include <list>

class GameManager
{
public:
	std::list<Session> GameSessions;

	void PerformGameSession();

	void AddRank(Team& winnerTeam);

	void RemoveRank(Team& looserTeam);

};