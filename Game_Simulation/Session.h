#pragma once
#include <ctime>
#include "Team.h"

class Session
{
public:
    time_t StartTime = time(0);
    Team Winner;
    Team TeamOne;
    Team TeamTwo;
    Team Loser;

    Session() {}

    // count the total number of HP 
    int GetTeamHP(Team& team);
    // count the total number of Damage 
    int GetTeamDamage(Team& team);

    void CalculateWinner();

};