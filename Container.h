#ifndef CONTAINER_H
#define CONTAINER_H

#include "Item.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int MAXSIZE = 1000;

class Container
{
	public:

		static int counter;
		int id;

		vector<Item> contents;
		Item containerLink;
		

		Container();
		Container(Item item);

		void addItem(Item item);
		void removeItem(Item item);
		int getCounter();
		int getID();
		int calcUsedWeight();
		void printContents();


};

#endif // CONTAINER_H