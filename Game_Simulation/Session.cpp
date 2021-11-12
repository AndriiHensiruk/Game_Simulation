#include "Session.h"


int Session::GetTeamHP(Team& team)
{
    int SumHP = 0;
    for (auto hero : team.Heroeslist)
    {
        SumHP += hero.GetHP();
    }
    return SumHP;
}

int Session::GetTeamDamage(Team& team)
{
    int SumDamage = 0;
    for (auto hero : team.Heroeslist)
    {
        SumDamage += hero.GetDamage();
    }
    return SumDamage;
}

void  Session::CalculateWinner() {

    int first_team_hp = GetTeamHP(TeamOne);
    std::cout << "The total number of HP teams first \t\t" << first_team_hp << "\n";
    int second_team_hp = GetTeamHP(TeamTwo);
    std::cout << "The total number of HP teams second \t\t" << second_team_hp << "\n";

    int first_team_damage = GetTeamDamage(TeamOne);
    std::cout << "The total number of Damage teams first \t\t" << first_team_damage << "\n";
    int second_team_damage = GetTeamDamage(TeamTwo);
    std::cout << "The total number of Damage teams second \t" << second_team_damage << "\n";

    if (first_team_hp - second_team_damage > second_team_hp - first_team_damage)
    {
        Winner = TeamOne;
        Loser = TeamTwo;
    }
    else
    {
        Winner = TeamTwo;
        Loser = TeamOne;
    }
    std::cout << "\nGame Result\n";
    std::cout << "Winner:\t";
    std::cout << Winner.Name;
}