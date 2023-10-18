#ifndef PLAYER_H
#define PLAYER_H

#include "Item.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Player
{
public:

	static int counter;
	int id;

	string name;

	//1m or 2f
	int gender;

	//1-10
	int hairOption;
	int weight;

	int health;
	int mana;

	//vector<Item> equipedItems;
	/*
	* 0:helmet slot
	* 1:chest armor slot
	* 2:leg armor slot
	* 3:feet armor leg
	* 4:hand armor slot
	* 5:belt slot
	* 6:necklace slot
	* 7:cape slot
	* 8:ring1 slot
	* 9:ring1 slot
	* 10:weapon slot
	* 11:shield slot
	*/
	Item equipedItems[12];

	/*
	* 0:minor healing
	* 1:minor bleeding
	* 2:weak poison
	* 3:broken leg
	* 4:broken arm
	* 5:sickness
	* 6:blinded
	* 7:cursed
	*/
	int statusEffects[8];
	int statusEffectsTimers[8];

	//strength[0], dexerity[1], constitution[2], intelligence[3], speed[4]
	//1-100
	int stats[5]= {};

	//farming, mining, crafting, etc
	int skills[7] = {};
	/*
	struct Skills
	{
		int mining;
		int woodcutting;
		int farming;
		int thievery;
		int enchantment;
		int cooking;
		int reading;
	} Skills;
	*/


	Player();
	Player(string name, int gender, int hairOption, int weight, int health, int mana);

	/*
	* 0:minor healing
	* 1:minor bleeding
	* 2:weak poison
	* 3:broken leg
	* 4:broken arm
	* 5:sickness
	* 6:blinded
	*/
	void addStatusEffect(int status);
	void removeStatusEffect(int status);
	void StatusEffectCharacterUpdate();

	void increaseStat(int amount, int stat);
	void decreaseStat(int amount, int stat);

	void increaseSkill(int amount);
	void decreaseSkill(int amount);

	int* getStats();
	void setStats(Player player);

	//check structs how
	void getSkills();
	void setSkills();

	int getHealth();
	void setHealth();

	int getMana();
	void setMana();

	string getName();
	void setName(string newName);


	int getCounter();
	int getID();



};

#endif // PLAYER_H