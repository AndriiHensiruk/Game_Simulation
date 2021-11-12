#include "HeroManager.h"

// create a hero 
Hero HeroManager::CreateHero(Hero new_hero)
{
	int id;
	std::string name;
	int randHeroHP = rand() % 100;
	int randHeroDamage = rand() % 100;

	std::cout << "Enter name ";
	std::cin >> name;
	std::cout << "Enter ID ";
	std::cin >> id;
	std::cout << "HP " << randHeroHP << "\n";
	std::cout << "Damage " << randHeroHP << "\n";

	new_hero.ID = id;
	new_hero.Name = name;
	new_hero.HP = randHeroHP;
	new_hero.Damage = randHeroDamage;

	this->heroesList.push_back(new_hero);

	return new_hero;
}

Hero HeroManager::GetHeroByName(std::string name)
{
	for (int i = 0; i < heroesList.size(); i++)
	{
		if (heroesList[i].GetName() == name)
			return heroesList[i];
	}
}

Hero HeroManager::GetHeroByById(int id)
{
	for (int i = 0; i < heroesList.size(); i++)
	{
		if (heroesList[i].GetId() == id)
			return heroesList[i];
	}
}

void HeroManager::ShowHeroInfo(Hero hero)
{
	std::cout << "ID = " << hero.GetId() << "\tName\t" << hero.GetName() << "\tHP\t" << hero.GetHP() << "\tDamage\t" << hero.GetDamage() << "\n";
}

void HeroManager::DeleteHero(int index)
{
	std::vector<Hero>::iterator iterator = heroesList.begin();
	std::advance(iterator, index);
	heroesList.erase(iterator);
}
void HeroManager::Print()
{
	for (auto elem : heroesList)
	{
		std::cout << elem << "\n";
	}
}

// random choice of the hero 

Hero HeroManager::RandHero()
{
	srand((unsigned)time(NULL));
	int a;
	a = (rand() % heroesList.size());
	Hero hero = heroesList[a];

	std::vector<Hero>::iterator iterator = heroesList.begin();
	std::advance(iterator, a);
	heroesList.erase(iterator);

	return hero;
}

Hero HeroManager::RandHeroOne()
{
	srand((unsigned)time(NULL));
	int a;
	a = (rand() % new_heroesList.size());
	Hero hero = new_heroesList[a];

	std::vector<Hero>::iterator iterator = new_heroesList.begin();
	std::advance(iterator, a);
	new_heroesList.erase(iterator);

	return hero;
}

