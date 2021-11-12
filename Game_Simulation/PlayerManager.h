#pragma once
#include <ctime>
#include <chrono>
#include <time.h>
#include <thread>
#include "Player.h"

class PlayerManager : public Player
{
public:
    std::vector<Player>playresList{
        {1, "Dendi", (rand() % 100)},
        {3, "SumaiL", (rand() % 100)},
        {4, "Topson", (rand() % 100)},
        {5, "Puppey", (rand() % 100)},
        {6, "Crystal", (rand() % 100)},
        {7, "GeneRaL", (rand() % 100)},
        {8, "Yatoro", (rand() % 100)},
        {9, "Arteezy", (rand() % 100)},
        {10, "Pikachu", (rand() % 100)},
        {11, "MagicaL", (rand() % 100)},
        {12, "Miros", (rand() % 100)},
        {13, "Ghostik", (rand() % 100)},
        {14, "Nisha", (rand() % 100)},
        {15, "Malik", (rand() % 100)},
        {16, "Alex", (rand() % 100)},
        {17, "Seleri", 0},
    };

    std::vector<Player>one_playresList{
        {1, "Dendi", (rand() % 100)},
        {3, "SumaiL", (rand() % 100)},
        {4, "Topson", (rand() % 100)},
        {5, "Puppey", (rand() % 100)},
        {6, "Crystal", (rand() % 100)},
        {7, "GeneRaL", (rand() % 100)},
        {8, "Yatoro", (rand() % 100)},
        {9, "Arteezy", (rand() % 100)},
        {10, "Pikachu", (rand() % 100)}
    };

    PlayerManager() {}

    PlayerManager(Player& players)
    {
    players: this->playresList;
    }


    Player CreatePlayer(Player& new_player);

    Player GetPlayerByName(std::string name);

    Player GetPlayerById(int id);

    void DeletePlayer(int index);

    Player RandPlayer();

    Player RandPlayerOne();



    void  ShowPlayerInfo(Player  player);

};
