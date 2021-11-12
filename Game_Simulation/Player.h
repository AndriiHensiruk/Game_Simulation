#pragma once
#include <iostream>
#include <string>
#include <vector>



class Player
{
public:
    int ID;
    std::string Name;
    int Rank;


    Player() {}

    Player(int id, std::string name, int rank)
    {
        this->ID = id;
        this->Name = name;
        this->Rank = rank;
    };

    std::string GetName();
    int GetId();
    int GetRank();

    // add to rating 
    void SetRank(int newRank);

    friend std::ostream& operator<< (std::ostream& out, const Player& player);
};

