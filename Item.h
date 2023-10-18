#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;


class Item
{
	

	public: 

		static int counter;
		int id;
		string name;
		int weight;
		int durability;
		int rarity;
		string type;
		string material;
		string materialComposite[3];
		int maxWeight;

		

		Item();
		Item(string name, int weight, int durability, int rarity, string type, string material);
		Item(string name, int weight, int durability, int rarity, string type, string materialComposite[]);
		Item(string name, int weight, int durability, int rarity, string type, string material, int maxWeight);
		Item(string name, int weight, int durability, int rarity, string type, string materialComposite[], int maxWeight);
		
		string getName();
		int getWeight();
		int getCounter();
		int getID();
		void setName(string newName);
		void setWeight(int newWeight);
		
	protected:
	private:


};

#endif // ITEM_H

