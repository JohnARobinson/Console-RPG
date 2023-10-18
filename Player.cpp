#include "Player.h"
#include "Item.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

Player::Player() {

	this->name = name;
	this->gender = gender;
	this->hairOption = hairOption;
	this->weight = weight;

	this->health = health;
	this->mana = mana;

	for (int i = 0; i < sizeof(skills) / sizeof(int); i++)
	{
		skills[i] = 1;
		/*
	* 0:mining
	* 1:woodcutting
	* 2:farming
	* 3:thievery
	* 4:enchantment
	* 5:cooking
	* 6:reading
	*/
	}
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
Player::Player(string name, int gender, int hairOption, int weight, int health, int mana) {

	this->name = name;
	this->gender = gender;
	this->hairOption = hairOption;
	this->weight = weight;

	this->health = health;
	this->mana = mana;

	for (int i = 0; i < sizeof(skills) / sizeof(int); i++)
	{
		skills[i] = 1;
		/*
	* 0:mining
	* 1:woodcutting
	* 2:farming
	* 3:thievery
	* 4:enchantment
	* 5:cooking
	* 6:reading
	*/		
	}
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

int Player::counter = 0;

void Player::addStatusEffect(int status){

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
void Player::removeStatusEffect(int status) {

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
void Player::StatusEffectCharacterUpdate() {

}

void Player::increaseStat(int amount, int stat) {

}
void Player::decreaseStat(int amount, int stat) {

}

void Player::increaseSkill(int amount) {

}
void Player::decreaseSkill(int amount) {

}

int* Player::getStats() {

	return stats;

}
void Player::setStats(Player player) {

}

//check structs how
void Player::getSkills() {

}
void Player::setSkills() {

}

int Player::getHealth() {
	int newHealth = health;

	return newHealth;

}
void Player::setHealth() {

}

int Player::getMana(){

	return mana;

}
void Player::setMana(){

}

string Player::getName() {
	return this->name;
}
void Player::setName(string newName) {
	this->name = newName;
}
int Player::getCounter() {
	return counter;
}

int Player::getID() {
	return id;
}

