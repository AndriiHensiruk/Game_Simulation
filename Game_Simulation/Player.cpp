#include "Player.h"


std::string Player::GetName()
{
	return Name;
}

int Player::GetId()
{
	return ID;
}

int Player::GetRank()
{
	return Rank;
}

void Player::SetRank(int newRank)
{
	Rank = newRank;
}

// overload the output operator 
std::ostream& operator<< (std::ostream& out, const Player& player)
{
	out << "Name player\t" << player.Name << "\tRank\t" << player.Rank;
	return out;
}