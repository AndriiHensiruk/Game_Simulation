#pragma once
#include "Hero.h"
#include <ctime>
#include <chrono>
#include <time.h>
#include <thread>
#include<vector>
#include <iostream>
#include <algorithm>


class HeroManager
{
public:
	std::vector<Hero>heroesList{
		{2, "Werk", (rand() % 100), (rand() % 100)},
		{3, "Bane", (rand() % 100), (rand() % 100)} ,
		{6, "Hoodwink", (rand() % 100), (rand() % 100)} ,
		{7, "Oracle", (rand() % 100), (rand() % 100)} ,
		{8, "Tiny", (rand() % 100), (rand() % 100)},
		{10, "Visage", (rand() % 100), (rand() % 100)},
		{14, "Dark", (rand() % 100), (rand() % 100)},
		{15, "Luna", (rand() % 100), (rand() % 100)},
		{16, "Medusa", (rand() % 100), (rand() % 100)},
		{20, "Pudge", (rand() % 100), (rand() % 100)}
	};

	std::vector<Hero>new_heroesList{
		{1, "Abaddon", (rand() % 100), (rand() % 100)},
		{4, "Dazzle", (rand() % 100), (rand() % 100)},
		{5, "Spirit", (rand() % 100), (rand() % 100)},
		{9, "Lich", (rand() % 100), (rand() % 100)},
		{11, "Stalker", (rand() % 100), (rand() % 100)},
		{12, "Zeus", (rand() % 100), (rand() % 100)},
		{13, "Sniper", (rand() % 100), (rand() % 100)},
		{17, "Ursa", (rand() % 100), (rand() % 100)},
		{18, "Warlock", (rand() % 100), (rand() % 100)},
		{20, "Pudge", (rand() % 100), (rand() % 100)}
	};


	HeroManager()
	{}

	Hero CreateHero(Hero new_hero);
	Hero GetHeroByName(std::string name);
	Hero GetHeroByById(int id);

	void ShowHeroInfo(Hero hero);

	void DeleteHero(int index);

	void Print();

	Hero RandHero();

	Hero RandHeroOne();

};