#include "Entities.h"


Entities::Entities() {
	
	this->name = name;
	this->weight = weight;
	this->attack = attack;
	this->health = health;
	this->healthRegeneration = healthRegeneration;

	for (int s = 0; s < sizeof(stats) / sizeof(int); s++)
	{
		stats[s] = 1;
		//strength[0], dexerity[1], constitution[2], intelligence[3], speed[4]
		//1-100
	}
	for (int j = 0; j < sizeof(statusEffects) / sizeof(int); j++)
	{
		statusEffects[j] = 0;
		//list of status by number
		/*
		* 0:minor healing
		* 1:minor bleeding
		* 2:weak poison
		* 3:broken leg
		* 4:broken arm
		* 5:sickness
		* 6:blinded
		*/
	}
	for (int t = 0; t < sizeof(statusEffectsTimers) / sizeof(int); t++)
	{
		statusEffectsTimers[t] = 0;
		//list of status by number
		/*				   default durations
		* 0:minor healing:  3
		* 1:minor bleeding: 10
		* 2:weak poison:    50
		* 3:broken leg:     1000
		* 4:broken arm:     1000
		* 5:sickness:       500
		* 6:blinded:        10
		*/
	}
}

Entities::Entities(string name, int weight, int attack, int health, int healthRegeneration){
	this->name = name;
	this->weight = weight;
	this->attack = attack;
	this->health = health;
	this->healthRegeneration = healthRegeneration;

	for (int s = 0; s < sizeof(stats) / sizeof(int); s++)
	{
		stats[s] = 1;
		//strength[0], dexerity[1], constitution[2], intelligence[3], speed[4]
		//1-100
	}
	for (int j = 0; j < sizeof(statusEffects) / sizeof(int); j++)
	{
		statusEffects[j] = 0;
		//list of status by number
		/*
		* 0:minor healing
		* 1:minor bleeding
		* 2:weak poison
		* 3:broken leg
		* 4:broken arm
		* 5:sickness
		* 6:blinded
		*/
	}
	for (int t = 0; t < sizeof(statusEffectsTimers) / sizeof(int); t++)
	{
		statusEffectsTimers[t] = 0;
		//list of status by number
		/*				   default durations
		* 0:minor healing:  3
		* 1:minor bleeding: 10
		* 2:weak poison:    50
		* 3:broken leg:     1000
		* 4:broken arm:     1000
		* 5:sickness:       500
		* 6:blinded:        10
		*/
	}
}

int Entities::counter = 0;

void Entities::addStatusEffect(int status) {

	//1 or 0 being on or off

	statusEffects[status] = 1;

	//list of status by number
	/*
	* 0:minor healing
	* 1:minor bleeding
	* 2:weak poison
	* 3:broken leg
	* 4:broken arm
	* 5:sickness
	* 6:blinded
	*/

}
void Entities::removeStatusEffect(int status) {

	//1 or 0 being on or off

	statusEffects[status] = 0;

	//list of status by number
	/*
	* 0:minor healing
	* 1:minor bleeding
	* 2:weak poison
	* 3:broken leg
	* 4:broken arm
	* 5:sickness
	* 6:blinded
	*/

}
void Entities::StatusEffectCharacterUpdate() {

}

void Entities::increaseStat(int amount, int stat) {

}
void Entities::decreaseStat(int amount, int stat) {

}

int* Entities::getStats() {
	return stats;
}
void Entities::setStats(Entities entity) {

}

int Entities::getHealth() {
	return health;
}
void Entities::setHealth() {

}

int Entities::getHealthRegeneration() {
	return healthRegeneration;

}
void Entities::setRegeneration() {

}

string Entities::getName() {
	return this->name;

}
void Entities::setName(string newName) {
	this->name = newName;
}

int Entities::getCounter() {
	return counter;
}
int Entities::getID() {
	return id;
}