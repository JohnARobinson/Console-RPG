#ifndef ENTITIES_H
#define ENTITIES_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Entities
{
public:
	static int counter;
	int id;

	string name;

	int weight;

	int attack;

	int health;
	int healthRegeneration;

	int statusEffects[8];
	int statusEffectsTimers[8];

	//strength[0], dexerity[1], constitution[2], intelligence[3], speed[4]
	//1-100
	int stats[5] = {};

	Entities();
	Entities(string name, int weight, int attack, int health, int healthRegeneration);

	void addStatusEffect(int status);
	void removeStatusEffect(int status);
	void StatusEffectCharacterUpdate();

	void increaseStat(int amount, int stat);
	void decreaseStat(int amount, int stat);

	int* getStats();
	void setStats(Entities entity);

	int getHealth();
	void setHealth();

	int getHealthRegeneration();
	void setRegeneration();

	string getName();
	void setName(string newName);

	int getCounter();
	int getID();

};

#endif // ENTITIES_H