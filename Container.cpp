#include "Container.h"
#include "Item.h"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;



Container::Container() {

    this->containerLink = containerLink;
    id = ++counter;

}

Container::Container(Item item) {

    this->containerLink = item;
    id = ++counter;

}

int Container::counter = 0;


void Container::addItem(Item item) {

    if (item.weight + calcUsedWeight() > containerLink.maxWeight)
    {
        cout << "That wont fit inside " << containerLink.name <<"\n";
        exit;
    }
    else {
        contents.push_back(item);
        //contents[0] = item;
        cout << item.name << " Added to Backpack\n";
    }

    
   

}

//remove item from container

void Container::removeItem(Item item) {

    for (int i = 0; i < contents.size(); i++)
    {
        if (item.id == contents[i].id)
        {
            contents.erase(contents.begin() + i);
        }
        
    }
    cout << item.name << " Removed to Backpack\n";

    

}


int Container::calcUsedWeight() {
    int totalUsedContainerWeight=0;
    for (int i = 0; i < contents.size(); i++)
    {
        totalUsedContainerWeight = contents[i].weight + totalUsedContainerWeight;

    }
    //cout << "Contents of " << containerLink.name << " Weigh " << totalUsedContainerWeight << " Pounds\n";
    return totalUsedContainerWeight;
}

void Container::printContents() {

    cout << "Contents of " << containerLink.name << ": ";

    for (int i = 0; i < contents.size(); i++)
        cout << contents[i].name << ", ";

    cout << "\n";
}
int Container::getCounter() {
    return counter;
}

int Container::getID() {
    return id;
}