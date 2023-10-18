#include "Item.h"

#include <iostream>
#include <string>
using namespace std;


Item::Item(){
	this->name = name;
	this->weight = weight;
	this->durability = durability;
	this->rarity = rarity;
	this->type = type;
	this->material = material;

	//counter++;
	id = ++counter;

	if (this->type == "container")
	{
		this->maxWeight = maxWeight;
	}
}
Item::Item(string name, int weight, int durability, int rarity, string type, string material) {
	this->name = name;
	this->weight = weight;
	this->durability = durability;
	this->rarity = rarity;
	this->type = type;
	this->material = material;
	this->maxWeight = maxWeight;

	//counter++;
	id = ++counter;
}

Item::Item(string name, int weight, int durability, int rarity, string type, string materialComposite[]) {
	this->name = name;
	this->weight = weight;
	this->durability = durability;
	this->rarity = rarity;
	this->type = type;
	this->maxWeight = maxWeight;

	//counter++;
	id = ++counter;
}
Item::Item(string name, int weight, int durability, int rarity, string type, string material, int maxWeight) {
	this->name = name;
	this->weight = weight;
	this->durability = durability;
	this->rarity = rarity;
	this->type = type;
	this->maxWeight = maxWeight;

	//counter++
	id = ++counter;
}
Item::Item(string name, int weight, int durability, int rarity, string type, string materialComposite[], int maxWeight) {
	this->name = name;
	this->weight = weight;
	this->durability = durability;
	this->rarity = rarity;
	this->type = type;
	this->maxWeight = maxWeight;

	//counter++
	id = ++counter;
}

int Item::counter = 0;

//getter's
string Item::getName() {
	return name;
}

int Item::getWeight() {
	return weight;
}

int Item::getCounter() {
	return counter;
}

int Item::getID() {
	return id;
}

//setter's
void Item::setName(string newName){
	name = newName;
}

void Item::setWeight(int newWeight) {
	weight = newWeight;
}





