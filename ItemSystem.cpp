#include "Item.h"
#include "Container.h"
#include "Player.h"
#include "Entities.h"

#include <vector>
#include <string>
#include <iostream>

using namespace std; 

int response;

const int xMap = 25;
const int yMap = 121;

const int xDoor = 59;
const int yDoor = 11;

char charMap[xMap][yMap];

struct monsters {
    Entities human[5];
    Entities monster[10];
};
struct items
{
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
* 9:ring2 slot
* 10:weapon slot
* 11:shield slot
*/
    Item helmet_Armor[5];
    Item chest_Armor[5];
    Item leg_Armor[5];
    Item boots[5];
    Item gloves[5];
    Item belts[3];
    Item necklace[3];
    Item cape[1];
    Item ring[3];
    Item weapon[5];
    Item shield[2];
};



int mainMenu()
{
    int dynamicUpdate = 0;

    while (true)
    {
        
        //5
        //-----
        cout << "--------------------------------------------------Box Dungeon Generator-------------------------------------------------\n";
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "Choose an Option:\n";
        cout << "1. Start New Adventure\n";
        cout << "2. Exit\n";
        if (dynamicUpdate == 0)
        {
            cout << "Your Response: ";
        }
        if (dynamicUpdate == 1)
        {
            cout << "Please choose another option: ";
            dynamicUpdate = 0;
        }
        cin >> response;
        if (response == 1)
        {
            return 1;
        }
        if (response == 2)
        {
            exit(0);
            return 2;
        }
        else
        {
            dynamicUpdate = 1;
        }
    }
    
}

void assignName(Player& player)
{
    string playerName;
    cout << "--------------------------------------------------Box Dungeon Generator-------------------------------------------------\n";
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "Give your Character a Name:\n";
    cin >> playerName;
    player.setName(playerName);
}
void assignGender(Player& player)
{
    int dynamicUpdate = 0;
    int gender;
    while (true)
    {
        cout << "--------------------------------------------------Box Dungeon Generator-------------------------------------------------\n";
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "Give your Character a Gender:\n";
        cout << "1. Male:\n";
        cout << "2. Female:\n";
        if (dynamicUpdate == 0)
        {
            cout << "Your Response: ";
        }
        if (dynamicUpdate == 1)
        {
            cout << "Please choose another option: ";
            dynamicUpdate = 0;
        }
        cin >> gender;
        if (gender == 1)
        {
            player.gender = 1;
            break;
        }
        if (gender == 2)
        {
            player.gender = 2;
            break;
        }
        else
        {
            dynamicUpdate = 1;
        }

            
    }

    
}
void assignHairStyle(Player& player)
{
    int dynamicUpdate = 0;
    int hair;
    while (true)
    {
        cout << "--------------------------------------------------Box Dungeon Generator-------------------------------------------------\n";
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "Give your Character a Hair Style:\n";
        cout << "1. Long & Curly:\n";
        cout << "2. Short & Curly:\n";
        cout << "3. Long & Straight:\n";
        cout << "4. Short & Straight:\n";
        cout << "5. Afro:\n";
        cout << "5. Bald:\n";
        cout << "6. Wild Hair:\n";
        cout << "7. Buzz Cut:\n";
        cout << "8. Mohawk:\n";
        cout << "9. Pigtails:\n";
        cout << "10. Ponytail:\n";
        if (dynamicUpdate == 0)
        {
            cout << "Your Response: ";
        }
        if (dynamicUpdate == 1)
        {
            cout << "Please choose another option: ";
            dynamicUpdate = 0;
        }
        cin >> hair;
        if (hair == 1)
        {
            player.hairOption = 1;
            break;
        }
        if (hair == 2)
        {
            player.hairOption = 2;
            break;
        }
        if (hair == 3)
        {
            player.hairOption = 3;
            break;
        }
        if (hair == 4)
        {
            player.hairOption = 4;
            break;
        }
        if (hair == 5)
        {
            player.hairOption = 5;
            break;
        }
        if (hair == 6)
        {
            player.hairOption = 6;
            break;
        }
        if (hair == 7)
        {
            player.hairOption = 7;
            break;
        }
        if (hair == 8)
        {
            player.hairOption = 8;
            break;
        }
        if (hair == 9)
        {
            player.hairOption = 9;
        }
        if (hair == 10)
        {
            player.hairOption = 10;
            break;
        }
        else {

            dynamicUpdate = 1;

        }
    }
}
void assignStats(Player& player)
{

    //strength[0], dexerity[1], constitution[2], intelligence[3], speed[4]
    //1-100
    //starting 1-10

    int dynamicUpdate = 0;
    int dynamicUpdateStats = 0;
    int statInput;
    int totalStats = 20;
    int str, dex, con, itl, spd;
    int preStr, preDex, preCon, preItl, preSpd;
    while (true)
    {
        cout << "--------------------------------------------------Box Dungeon Generator-------------------------------------------------\n";
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "Choose your Character Stat Distribution:\n";
        cout << "Total Stat Points: " << totalStats <<"\n";
        cout << "1. Strength: " << player.stats[0] << "\n";
        cout << "2. Dexerity: " << player.stats[1] << "\n";
        cout << "3. Constitution: " << player.stats[2] << "\n";
        cout << "4. Intelligence: " << player.stats[3] << "\n";
        cout << "5. Speed: " << player.stats[4] << "\n";
        if (totalStats == 0)
        {
            cout << "6. Return to Character Creator \n";
        }

        if (dynamicUpdate == 0)
        {
            cout << "Your Response: ";
        }
        if (dynamicUpdate == 1)
        {
            cout << "Please choose another option: ";
            dynamicUpdate = 0;
        }
        cin >> statInput;
        if (statInput == 1)
        {
            while (true)
            {
                cout << "--------------------------------------------------Box Dungeon Generator-------------------------------------------------\n";
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout << "Choose your Character's Mining:\n";
                cout << "Total Skill Points Left: " << totalStats << "\n";
                if (dynamicUpdateStats == 0)
                {
                    cout << "Your Response: ";
                }
                if (dynamicUpdateStats == 1)
                {
                    cout << "Can not start with a stat higher than 25 to start with: ";
                    dynamicUpdateStats = 0;
                }
                if (dynamicUpdateStats == 2)
                {
                    cout << "You do not have enough stats left to distribute that much strength: ";
                    dynamicUpdateStats = 0;
                }
                cin >> str;
                if (str > 10)
                {
                    dynamicUpdateStats = 1;
                }
                if (str - player.stats[0] > totalStats)
                {
                    dynamicUpdateStats = 2;
                }
                if (str <= 10 && str - player.stats[0] <= totalStats) {
                    
                    totalStats = totalStats - (str - player.stats[0]);
                    player.stats[0] = str;
                    break;
                }
            }
            
        }
        if (statInput == 2)
        {
            while (true)
            {
                cout << "--------------------------------------------------Box Dungeon Generator-------------------------------------------------\n";
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout << "Choose your Character's Dexerity:\n";
                cout << "Total Stat Points Left: " << totalStats << "\n";
                if (dynamicUpdateStats == 0)
                {
                    cout << "Your Response: ";
                }
                if (dynamicUpdateStats == 1)
                {
                    cout << "Can not start with a stat higher than 10 to start with: ";
                    dynamicUpdateStats = 0;
                }
                if (dynamicUpdateStats == 2)
                {
                    cout << "You do not have enough stats left to distribute that much Dexerity: ";
                    dynamicUpdateStats = 0;
                }
                cin >> dex;
                if (dex > 10)
                {
                    dynamicUpdateStats = 1;
                }
                if (dex - player.stats[1] > totalStats)
                {
                    dynamicUpdateStats = 2;
                }
                if (dex <= 10 && dex - player.stats[1] <= totalStats) {
                    
                    totalStats = totalStats - (dex - player.stats[1]);
                    player.stats[1] = dex;
                    break;
                }
            }
            
        }
        if (statInput == 3)
        {
            while (true)
            {
                cout << "--------------------------------------------------Box Dungeon Generator-------------------------------------------------\n";
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout << "Choose your Character's Constitution:\n";
                cout << "Total Stat Points Left: " << totalStats << "\n";
                if (dynamicUpdateStats == 0)
                {
                    cout << "Your Response: ";
                }
                if (dynamicUpdateStats == 1)
                {
                    cout << "Can not start with a stat higher than 10 to start with: ";
                    dynamicUpdateStats = 0;
                }
                if (dynamicUpdateStats == 2)
                {
                    cout << "You do not have enough stats left to distribute that much Constitution: ";
                    dynamicUpdateStats = 0;
                }
                cin >> con;
                if (con > 10)
                {
                    dynamicUpdateStats = 1;
                }
                if (con - player.stats[2] > totalStats)
                {
                    dynamicUpdateStats = 2;
                }
                if (con <= 10 && con - player.stats[2] <= totalStats) {
                    
                    totalStats = totalStats - (con - player.stats[2]);
                    player.stats[2] = con;
                    break;
                }
            }

        }
        if (statInput == 4)
        {
            while (true)
            {
                cout << "--------------------------------------------------Box Dungeon Generator-------------------------------------------------\n";
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout << "Choose your Character's Intelligence:\n";
                cout << "Total Stat Points Left: " << totalStats << "\n";
                if (dynamicUpdateStats == 0)
                {
                    cout << "Your Response: ";
                }
                if (dynamicUpdateStats == 1)
                {
                    cout << "Can not start with a stat higher than 10 to start with: ";
                    dynamicUpdateStats = 0;
                }
                if (dynamicUpdateStats == 2)
                {
                    cout << "You do not have enough stats left to distribute that much Intelligence: ";
                    dynamicUpdateStats = 0;
                }
                cin >> itl;
                if (itl > 10)
                {
                    dynamicUpdateStats = 1;
                }
                if (itl - player.stats[3] > totalStats)
                {
                    dynamicUpdateStats = 2;
                }
                if (itl <= 10 && itl - player.stats[3] <= totalStats) {
                    
                    totalStats = totalStats - (itl - player.stats[3]);
                    player.stats[3] = itl;
                    break;
                }
            }
        }
        if (statInput == 5)
        {
            while (true)
            {
                cout << "--------------------------------------------------Box Dungeon Generator-------------------------------------------------\n";
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout << "Choose your Character's Speed:\n";
                cout << "Total Stat Points Left: " << totalStats << "\n";
                if (dynamicUpdateStats == 0)
                {
                    cout << "Your Response: ";
                }
                if (dynamicUpdateStats == 1)
                {
                    cout << "Can not start with a stat higher than 10 to start with: ";
                    dynamicUpdateStats = 0;
                }
                if (dynamicUpdateStats == 2)
                {
                    cout << "You do not have enough stats left to distribute that much Speed: ";
                    dynamicUpdateStats = 0;
                }
                cin >> spd;
                if (spd > 10)
                {
                    dynamicUpdateStats = 1;
                }
                if (spd - player.stats[4] > totalStats)
                {
                    dynamicUpdateStats = 2;
                }
                if (spd <= 10 && spd - player.stats[4] <= totalStats) {
                    totalStats = totalStats - (spd - player.stats[4]);
                    player.stats[4] = spd;
                    break;
                }
            }
        }
        if (statInput == 6)
        {
            break;
        }
        else
        {
            dynamicUpdate = 1;
        }


    }


}
void assignSkills(Player& player)
{

    int dynamicUpdate = 0;
    int dynamicUpdateSkills = 0;
    int skillInput;
    int totalSkills = 50;
    int mine, wood, farm, thiev, ench, cook, read;
    int preMine, preWood, preFarm, preThiev, preEnch, preCook, preRead;

    /*
* 0:mining
* 1:woodcutting
* 2:farming
* 3:thievery
* 4:enchantment
* 5:cooking
* 6:reading
*/


    while (true)
    {
        cout << "--------------------------------------------------Box Dungeon Generator-------------------------------------------------\n";
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "Choose your Character Stat Distribution:\n";
        cout << "Total Stat Points: " << totalSkills << "\n";
        cout << "1. Mining: " << player.skills[0] << "\n";
        cout << "2. Woodcutting: " << player.skills[1] << "\n";
        cout << "3. Farming: " << player.skills[2] << "\n";
        cout << "4. Thievery: " << player.skills[3] << "\n";
        cout << "5. Enchantment: " << player.skills[4] << "\n";
        cout << "6. Cooking: " << player.skills[5] << "\n";
        cout << "7. Reading: " << player.skills[6] << "\n";
        if (totalSkills == 0)
        {
            cout << "8. Return to Character Creator \n";
        }
        if (dynamicUpdate == 0)
        {
            cout << "Your Response: ";
        }
        if (dynamicUpdate == 1)
        {
            cout << "Please choose another option: ";
            dynamicUpdate = 0;
        }

        cin >> skillInput;
        if (skillInput == 1)
        {
            while (true)
            {
                cout << "--------------------------------------------------Box Dungeon Generator-------------------------------------------------\n";
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout << "Choose your Character's Mining Level:\n";
                cout << "Total Skill Points Left: " << totalSkills << "\n";
                if (dynamicUpdateSkills == 0)
                {
                    cout << "Your Response: ";
                }
                if (dynamicUpdateSkills == 1)
                {
                    cout << "Can not start with a skill higher than 25 to start with: ";
                    dynamicUpdateSkills = 0;
                }
                if (dynamicUpdateSkills == 2)
                {
                    cout << "You do not have enough skill points left to distribute that much mining: ";
                    dynamicUpdateSkills = 0;
                }
                cin >> mine;
                if (mine > 25)
                {
                    dynamicUpdateSkills = 1;
                }
                if (mine - player.skills[0] > totalSkills)
                {
                    dynamicUpdateSkills = 2;
                }
                if (mine <= 25 && mine - player.skills[0] <= totalSkills) {

                    totalSkills = totalSkills - (mine - player.skills[0]);
                    player.skills[0] = mine;
                    break;
                }
            }

        }
        if (skillInput == 2)
        {
            while (true)
            {
                cout << "--------------------------------------------------Box Dungeon Generator-------------------------------------------------\n";
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout << "Choose your Character's Woodcutting Level:\n";
                cout << "Total Skill Points Left: " << totalSkills << "\n";
                if (dynamicUpdateSkills == 0)
                {
                    cout << "Your Response: ";
                }
                if (dynamicUpdateSkills == 1)
                {
                    cout << "Can not start with a skill higher than 25 to start with: ";
                    dynamicUpdateSkills = 0;
                }
                if (dynamicUpdateSkills == 2)
                {
                    cout << "You do not have enough skills points left to distribute that much woodcutting: ";
                    dynamicUpdateSkills = 0;
                }
                cin >> wood;
                if (wood > 25)
                {
                    dynamicUpdateSkills = 1;
                }
                if (wood - player.skills[1] > totalSkills)
                {
                    dynamicUpdateSkills = 2;
                }
                if (wood <= 25 && wood - player.skills[1] <= totalSkills) {

                    totalSkills = totalSkills - (wood - player.skills[1]);
                    player.skills[1] = wood;
                    break;
                }
            }

        }
        if (skillInput == 3)
        {
            while (true)
            {
                cout << "--------------------------------------------------Box Dungeon Generator-------------------------------------------------\n";
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout << "Choose your Character's Farming Level:\n";
                cout << "Total Skill Points Left: " << totalSkills << "\n";
                if (dynamicUpdateSkills == 0)
                {
                    cout << "Your Response: ";
                }
                if (dynamicUpdateSkills == 1)
                {
                    cout << "Can not start with a skill higher than 25 to start with: ";
                    dynamicUpdateSkills = 0;
                }
                if (dynamicUpdateSkills == 2)
                {
                    cout << "You do not have enough skills points left to distribute that much farming: ";
                    dynamicUpdateSkills = 0;
                }
                cin >> farm;
                if (farm > 25)
                {
                    dynamicUpdateSkills = 1;
                }
                if (farm - player.skills[2] > totalSkills)
                {
                    dynamicUpdateSkills = 2;
                }
                if (farm <= 25 && farm - player.skills[2] <= totalSkills) {

                    totalSkills = totalSkills - (farm - player.skills[2]);
                    player.skills[2] = farm;
                    break;
                }
            }

        }
        if (skillInput == 4)
        {
            while (true)
            {
                cout << "--------------------------------------------------Box Dungeon Generator-------------------------------------------------\n";
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout << "Choose your Character's Thieving Level:\n";
                cout << "Total Skill Points Left: " << totalSkills << "\n";
                if (dynamicUpdateSkills == 0)
                {
                    cout << "Your Response: ";
                }
                if (dynamicUpdateSkills == 1)
                {
                    cout << "Can not start with a skill higher than 25 to start with: ";
                    dynamicUpdateSkills = 0;
                }
                if (dynamicUpdateSkills == 2)
                {
                    cout << "You do not have enough skills points left to distribute that much thieving: ";
                    dynamicUpdateSkills = 0;
                }
                cin >> thiev;
                if (thiev > 25)
                {
                    dynamicUpdateSkills = 1;
                }
                if (thiev - player.skills[3] > totalSkills)
                {
                    dynamicUpdateSkills = 2;
                }
                if (thiev <= 25 && thiev - player.skills[3] <= totalSkills) {

                    totalSkills = totalSkills - (thiev - player.skills[3]);
                    player.skills[3] = thiev;
                    break;
                }
            }
        }
        if (skillInput == 5)
        {
            while (true)
            {
                cout << "--------------------------------------------------Box Dungeon Generator-------------------------------------------------\n";
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout << "Choose your Character's Enchanting Level:\n";
                cout << "Total Skill Points Left: " << totalSkills << "\n";
                if (dynamicUpdateSkills == 0)
                {
                    cout << "Your Response: ";
                }
                if (dynamicUpdateSkills == 1)
                {
                    cout << "Can not start with a skill higher than 25 to start with: ";
                    dynamicUpdateSkills = 0;
                }
                if (dynamicUpdateSkills == 2)
                {
                    cout << "You do not have enough skills pointsleft to distribute that much enchanting: ";
                    dynamicUpdateSkills = 0;
                }
                cin >> ench;
                if (ench > 25)
                {
                    dynamicUpdateSkills = 1;
                }
                if (ench - player.skills[4] > totalSkills)
                {
                    dynamicUpdateSkills = 2;
                }
                if (ench <= 25 && ench - player.skills[4] <= totalSkills) {
                    totalSkills = totalSkills - (ench - player.skills[4]);
                    player.skills[4] = ench;
                    break;
                }
            }
        }
        if (skillInput == 6)
        {
            while (true)
            {
                cout << "--------------------------------------------------Box Dungeon Generator-------------------------------------------------\n";
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout << "Choose your Character's Cooking Level:\n";
                cout << "Total Skill Points Left: " << totalSkills << "\n";
                if (dynamicUpdateSkills == 0)
                {
                    cout << "Your Response: ";
                }
                if (dynamicUpdateSkills == 1)
                {
                    cout << "Can not start with a skill higher than 25 to start with: ";
                    dynamicUpdateSkills = 0;
                }
                if (dynamicUpdateSkills == 2)
                {
                    cout << "You do not have enough skills points left to distribute that much cooking: ";
                    dynamicUpdateSkills = 0;
                }
                cin >> cook;
                if (cook > 25)
                {
                    dynamicUpdateSkills = 1;
                }
                if (cook - player.skills[5] > totalSkills)
                {
                    dynamicUpdateSkills = 2;
                }
                if (cook <= 25 && cook - player.skills[5] <= totalSkills) {
                    totalSkills = totalSkills - (cook - player.skills[5]);
                    player.skills[5] = cook;
                    break;
                }
            }
        }
        if (skillInput == 7)
        {
            while (true)
            {
                cout << "--------------------------------------------------Box Dungeon Generator-------------------------------------------------\n";
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout << "Choose your Character's Reading Level:\n";
                cout << "Total Skill Points Left: " << totalSkills << "\n";
                if (dynamicUpdateSkills == 0)
                {
                    cout << "Your Response: ";
                }
                if (dynamicUpdateSkills == 1)
                {
                    cout << "Can not start with a skill higher than 25 to start with: ";
                    dynamicUpdateSkills = 0;
                }
                if (dynamicUpdateSkills == 2)
                {
                    cout << "You do not have enough skills points left to distribute that much reading: ";
                    dynamicUpdateSkills = 0;
                }
                cin >> read;
                if (read > 25)
                {
                    dynamicUpdateSkills = 1;
                }
                if (read - player.skills[6] > totalSkills)
                {
                    dynamicUpdateSkills = 2;
                }
                if (read <= 25 && read - player.skills[6] <= totalSkills) {
                    totalSkills = totalSkills - (read - player.skills[6]);
                    player.skills[6] = read;
                    break;
                }
            }
        }
        if (skillInput == 8)
        {
            break;
        }
        else
        {
            dynamicUpdate = 1;
        }



    }


}
int start(Player& player)
{
    
    int dynamicUpdate = 0;
    /*
    int gender;
	int hairOption;
	int weight;

	int health;
	int mana;
    */
    int charCreateStatus[] = { 0, 0, 0, 0, 0 };

    while (true)
    {

        cout << "--------------------------------------------------Box Dungeon Generator-------------------------------------------------\n";
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "Create your Character:\n";

        for (int i = 0; i < 6; i++)
        {
            if (i == 0)
            {
                if (charCreateStatus[i] == 0)
                {
                    cout << "1. Assign Character Name\n";
                }
                if (charCreateStatus[i] == 1)
                {
                    cout << "1. Character Name: " << player.name << "\n";
                }
            }
            if (i == 1)
            {
                if (charCreateStatus[i] == 0)
                {
                    cout << "2. Assign Character Gender\n";
                }
                if (charCreateStatus[i] == 1)
                {
                    if(player.gender == 1)
                    {
                        cout << "2. Character Gender: Male\n";
                    }
                    if (player.gender == 2)
                    {
                        cout << "2. Character Gender: Female\n";
                    }                   
                }
            }
            if (i == 2)
            {
                if (charCreateStatus[i] == 0)
                {
                    cout << "3. Assign Character Hair Option\n";
                }
                if (charCreateStatus[i] == 1)
                {
                    //add more later
                    cout << "3. Character Hair Option: " << player.hairOption << "\n";
                }

            }
            if (i == 3) {

                if (charCreateStatus[i] == 0)
                {
                    cout << "4. Assign Character Stats\n";
                }
                if (charCreateStatus[i] == 1)
                {
                    //add more later
                    cout << "4. Character Stats: Str: " << player.stats[0] << " Dex: " << player.stats[1] << " Con: " << player.stats[2] << " Int: " << player.stats[3] << " Spd: " << player.stats[4] << "\n";
                }
            }
            if (i == 4) {
                if (charCreateStatus[4] == 0)
                {
                    cout << "5. Assign Character Skills\n";
                }
                if (charCreateStatus[i] == 1)
                {
                    //add more later
                    cout << "5. Character Skills: Mining:      " << player.skills[0] << " Woodcutting: " << player.skills[1] << " Farming: " << player.skills[2] << " Thievery: " << player.skills[3] << "\n";
                    cout << "                     Enchantment: " << player.skills[4] << " Cooking: " << player.skills[5] << " Reading: " << player.skills[6] <<"\n";
                }
            }
            if (i == 5) {
                cout << "6. Return to Main Menu\n";
                if (charCreateStatus[0] == 1) {
                    if (charCreateStatus[1] == 1) {
                        if (charCreateStatus[2] == 1) {
                            if (charCreateStatus[3] == 1) {
                                if (charCreateStatus[4] == 1) {
                                    cout << "7. Finish\n";
                                }
                            }
                        }
                    }
                }
            }
            
            


        }

        if (dynamicUpdate == 0)
        {
            cout << "Your Response: ";
        }
        if (dynamicUpdate == 1)
        {
            cout << "Please choose another option: ";
            dynamicUpdate = 0;
        }
        cin >> response;

        if (response == 1)
        {
            charCreateStatus[0] = 1;
            assignName(player);
        }
        if (response == 2)
        {
            charCreateStatus[1] = 1;
            assignGender(player);
        }
        if (response == 3)
        {
            charCreateStatus[2] = 1;
            assignHairStyle(player);
        }
        if (response == 4)
        {
            charCreateStatus[3] = 1;
            assignStats(player);
        }
        if (response == 5)
        {
            charCreateStatus[4] = 1;
            assignSkills(player);
        }

        if (response == 6)
        {
            return 0;
        }
        if (response == 7)
        {
            return 3;
        }
        else
        {
            dynamicUpdate = 1;
        }

        //********
        

        //Item arrow2("Rock Arrow", 1, 100, 0, "misc", "wood");
        /*
        this->name = name;
        this->gender = gender;
        this->hairOption = hairOption;
        this->weight = weight;

        this->health = health;
        this->mana = mana;
        */
    }
    return 1;
}

items generateItems(struct items *allitems) {
    cout << "generating items\n";
    //allitems = (struct items*)malloc(sizeof(struct items));
    //***armor***
    //Item(string name, int weight, int durability, int rarity, string type, string material);
    // 
    // 
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
* 10:weapon slot
* 11:shield slot
*/  

    // 
    //helmets
    Item* helmet_0 = new Item("Cloth Helmet", 1, 100, 0, "helmet", "cloth");
    allitems->helmet_Armor[0] = *helmet_0;
    Item* helmet_1 = new Item("Leather Helmet", 1, 100, 1, "helmet", "leather");
    allitems->helmet_Armor[1] = *helmet_1;
    Item* helmet_2 = new Item("Iron Helmet", 3, 100, 2, "helmet", "iron");
    allitems->helmet_Armor[2] = *helmet_2;
    Item* helmet_3 = new Item("Steel Helmet", 3, 100, 3, "helmet", "steel");
    allitems->helmet_Armor[3] = *helmet_3;
    Item* helmet_4 = new Item("Mithril Helmet", 1, 100, 4, "helmet", "mithril");
    allitems->helmet_Armor[4] = *helmet_4;

    //chest armor
    Item* chest_0 = new Item("Cloth Armor", 5, 100, 0, "chest", "cloth");
    allitems->chest_Armor[0] = *chest_0;
    Item* chest_1 = new Item("Leather Armor", 6, 100, 1, "chest", "leather");
    allitems->chest_Armor[1] = *chest_1;
    Item* chest_2 = new Item("Iron Armor", 15, 100, 2, "chest", "iron");
    allitems->chest_Armor[2] = *chest_2;
    Item* chest_3 = new Item("Steel Armor", 15, 100, 3, "chest", "steel");
    allitems->chest_Armor[3] = *chest_3;
    Item* chest_4 = new Item("Mithril Armor", 5, 100, 4, "chest", "mithril");
    allitems->chest_Armor[4] = *chest_4;

    //leg armor
    Item* leg_0 = new Item("Cloth Leg Armor", 3, 100, 0, "legs", "cloth");
    allitems->leg_Armor[0] = *leg_0;
    Item* leg_1 = new Item("Leather Leg Armor", 4, 100, 1, "legs", "leather");
    allitems->leg_Armor[1] = *leg_1;
    Item* leg_2 = new Item("Iron Leg Armor", 10, 100, 2, "legs", "iron");
    allitems->leg_Armor[2] = *leg_2;
    Item* leg_3 = new Item("Steel Leg Armor", 10, 100, 3, "legs", "steel");
    allitems->leg_Armor[3] = *leg_3;
    Item* leg_4 = new Item("Mithril Leg Armor", 3, 100, 4, "legs", "mithril");
    allitems->leg_Armor[4] = *leg_4;

    //boots
    Item* boot_0 = new Item("Cloth Boots", 1, 100, 0, "boots", "cloth");
    allitems->boots[0] = *boot_0;
    Item* boot_1 = new Item("Leather Boots", 2, 100, 0, "boots", "Leather");
    allitems->boots[1] = *boot_1;
    Item* boot_2 = new Item("Iron Boots", 5, 100, 0, "boots", "Iron");
    allitems->boots[2] = *boot_2;
    Item* boot_3 = new Item("Steel Boots", 5, 100, 3, "boots", "steel");
    allitems->leg_Armor[3] = *boot_3;
    Item* boot_4 = new Item("Mithril Boots", 1, 100, 4, "boots", "mithril");
    allitems->boots[4] = *boot_4;

    //gloves
    Item* gloves_0 = new Item("Cloth Gloves", 1, 100, 0, "gloves", "cloth");
    allitems->gloves[0] = *gloves_0;
    Item* gloves_1 = new Item("Leather Gloves", 2, 100, 0, "gloves", "leather");
    allitems->gloves[1] = *gloves_1;
    Item* gloves_2 = new Item("Iron Gloves", 5, 100, 0, "gloves", "iron");
    allitems->gloves[2] = *gloves_2;
    Item* gloves_3 = new Item("Steel Gloves", 5, 100, 0, "gloves", "steel");
    allitems->gloves[3] = *gloves_3;
    Item* gloves_4 = new Item("Mithril Gloves", 1, 100, 0, "gloves", "mithril");
    allitems->gloves[4] = *gloves_4;

    //belts
    Item* belt_0 = new Item("Cloth belt", 1, 100, 0, "belt", "cloth");
    allitems->belts[0] = *belt_0;
    Item* belt_1 = new Item("Leather belt", 1, 100, 0, "belt", "leather");
    allitems->belts[1] = *belt_1;
    Item* belt_2 = new Item("Iron belt", 1, 100, 0, "belt", "iron");
    allitems->belts[2] = *belt_2;

    //necklace
    Item* necklace_0 = new Item("Bronze Necklace", 1, 100, 0, "necklace", "bronze");
    allitems->necklace[0] = *necklace_0;
    Item* necklace_1 = new Item("Silver Necklace", 1, 100, 0, "necklace", "silver");
    allitems->necklace[1] = *necklace_1;
    Item* necklace_2 = new Item("Gold Necklace", 1, 100, 0, "necklace", "Gold");
    allitems->necklace[2] = *necklace_2;

    //cape
    Item* cape_0 = new Item("Cloth Cape", 1, 100, 0, "cape", "cloth");
    allitems->cape[0] = *cape_0;

    //rings
    Item* ring_0 = new Item("Bronze ring", 1, 100, 0, "ring", "bronze");
    allitems->ring[0] = *ring_0;
    Item* ring_1 = new Item("Silver ring", 1, 100, 0, "ring", "silver");
    allitems->ring[1] = *ring_1;
    Item* ring_2 = new Item("Gold ring", 1, 100, 0, "ring", "gold");
    allitems->ring[2] = *ring_2;

    //weapons
    Item* weapon_0 = new Item("Iron Sword", 2, 100, 0, "weapon", "iron");
    allitems->weapon[0] = *weapon_0;
    Item* weapon_1 = new Item("Iron Axe", 3, 100, 0, "weapon", "iron");
    allitems->weapon[1] = *weapon_1;
    Item* weapon_2 = new Item("Iron Dagger", 1, 100, 0, "weapon", "iron");
    allitems->weapon[2] = *weapon_2;
    Item* weapon_3 = new Item("Wooden Staff", 2, 100, 0, "weapon", "wood");
    allitems->weapon[3] = *weapon_3;
    Item* weapon_4 = new Item("Wooden Bow", 2, 100, 0, "weapon", "wood");
    allitems->weapon[4] = *weapon_4;

    //shields
    Item* shield_0 = new Item("Wooden Shield", 2, 100, 0, "shield", "wood");
    allitems->shield[0] = *shield_0;
    Item* shield_1 = new Item("Iron Shield", 5, 100, 0, "shield", "rion");
    allitems->shield[1] = *shield_1;

    //test print
    //cout << allitems.weapon[3].name;

    return *allitems;

}
monsters generateMonsters(struct monsters *allEntities) {
    cout << "generating monsters\n";
    //allEntities = (struct monsters*)malloc(sizeof(struct monsters));
    //add stats
    
    //humans
    /////////////////////////////////Entities(string name, int weight, int attack, int health, int healthRegeneration)
    //                                                 wt  atk hp  hp/r
    Entities* human_0 = new Entities("Crazed Begger", 100, 10, 80, 1);
    allEntities->human[0] = *human_0;
    Entities* human_1 = new Entities("Dark Footman", 100, 25, 200, 5);
    allEntities->human[1] = *human_1;
    Entities* human_2 = new Entities("Dark Knight", 100, 50, 500, 25);
    allEntities->human[2] = *human_2;
    Entities* human_3 = new Entities("Berserker", 100, 30, 200, 50);
    allEntities->human[3] = *human_3;
    Entities* human_4 = new Entities("Corrupted Soldier", 100, 15, 100, 1);
    allEntities->human[4] = *human_4;

    //monsters
    Entities* monster_0 = new Entities("Slime", 5, 1, 50, 5);
    allEntities->monster[0] = *monster_0;
    Entities* monster_1 = new Entities("Greater Slime", 25, 25, 250, 25);
    allEntities->monster[1] = *monster_1;
    Entities* monster_2 = new Entities("Skeleton", 70, 12, 75, 0);
    allEntities->monster[2] = *monster_2;
    Entities* monster_3 = new Entities("Zombie", 100, 10, 300, 25);
    allEntities->monster[3] = *monster_3;
    Entities* monster_4 = new Entities("Minotaur", 250, 40, 500, 15);
    allEntities->monster[4] = *monster_4;
    Entities* monster_5 = new Entities("Ghost", 1, 30, 20, 0);
    allEntities->monster[5] = *monster_5;
    Entities* monster_6 = new Entities("Troll", 180, 30, 400, 100);
    allEntities->monster[6] = *monster_6;
    Entities* monster_7 = new Entities("Goblin", 30, 5, 50, 1);
    allEntities->monster[7] = *monster_7;
    Entities* monster_8 = new Entities("Greater Skeleton", 100, 25, 150, 0);
    allEntities->monster[8] = *monster_8;
    Entities* monster_9 = new Entities("Troll King", 300, 60, 1000, 200);
    allEntities->monster[9] = *monster_9;

    return *allEntities;
}

//do nothing currently
void generateBar(int begin, int end) {
    
}
void generateMiddle(int begin, int end) {

}

void generateGameMap() {
    //[20][121]
    cout << "generating map\n";
    //for (int i = 0; i < sizeof(charMap) / sizeof(int); i++)
    //for (int j = 0; j < sizeof(charMap[i]) / sizeof(int); j++)
    for (int i = 0; i < xMap; i++)
    {
        for (int j = 0; j < yMap; j++)
        {

            if (i == 0 && j != yMap-1) {
                //cout << "-";
                charMap[i][j] = '-';
            }
            if (i == 0 && j == yMap-1) {
                //cout << "\n";
                charMap[i][j] = '\n';
            }
            if (i >= 1 && i < xMap-1 && j == 0) {
                //cout << "|";
                charMap[i][j] = '|';
            }
            if (i >= 1 && i < xMap-1 && j > 0 && j < yMap - 2) {
                //cout << " ";
                charMap[i][j] = ' ';
            }
            if (i >= 1 && i < xMap-1 && j == yMap - 2) {
                //cout << "|";
                charMap[i][j] = '|';
            }
            if (i >= 1 && i < xMap-1 && j == yMap-1) {
                //cout << "\n";
                charMap[i][j] = '\n';
            }
            if (i == xMap - 1 && j != yMap-1) {
                //cout << "-";
                charMap[i][j] = '-';
            }

            if (i == xMap - 1 && j == yMap - 1) {
                //cout << "\n";
                charMap[i][j] = '\n';
            }
        }
    }
    
    
    
} 

void generateBlockers() {
    //char charMap[xMap][yMap];

    //generate outer walls
    for (int i = 1; i < xMap-1; i++)
    {
        for (int j = 1; j < yMap-2; j++)
        {
            if (i == 1 && j != xDoor) {
                charMap[i][j] = 'w';
            }
            if (i > 1 && i != yDoor && j == 1) {
                charMap[i][j] = 'w';
            }
            if (i > 1 && i != yDoor && j == yMap - 3) {
                charMap[i][j] = 'w';
            }
            if (i == xMap - 2 && j != xDoor) {
                charMap[i][j] = 'w';
            }
            if (i == 1 && j == xDoor) {
                charMap[i][j] = 'D';
            }
            if (i == xMap - 2 && j == xDoor) {
                charMap[i][j] = 'D';
            }
            if (i > 1 && i == yDoor && j == 1) {
                charMap[i][j] = 'D';
            }
            if (i > 1 && i == yDoor && j == yMap - 3) {
                charMap[i][j] = 'D';
            }
        }
    }

    //generate inner walls
    
    int randomNumsX[20];
    int randomNumsY[20];
    srand(time(NULL));

    for (int i = 0; i < (sizeof(randomNumsX) / sizeof(int)); i++)
    {
        randomNumsX[i] = rand() % 23;
        randomNumsY[i] = rand() % 119;
        charMap[randomNumsX[i]][randomNumsY[i]] = 'w';
        if (i == 0)
        {
            charMap[randomNumsX[i]][randomNumsY[i] + 1] = '1';
        }
        

    }

    //connect walls

    //selected generated wall
    int wallLocationX = 0;
    int wallLocationY = 0;

    //find closest outer wall segment
    int wallConnectionLocationX = 0;
    int wallConnectionLocationY = 0;

    int totalDistanceXUp = 0;
    int totalDistanceXDown = 0;
    int totalDistanceYLeft = 0;
    int totalDistanceYRight = 0;
    int smallestDistance = 0;
    string DirectonBuild = "";

    for (int i = 0; i < (sizeof(randomNumsX) / sizeof(int));)
    {
        wallLocationX = randomNumsX[i];
        wallLocationY = randomNumsY[i];

        //x up direction
        for (int x1 = randomNumsX[i]-1; x1 > 1; x1--)
        {
            if (charMap[x1][randomNumsY[i]] == 'w')
            {
                totalDistanceXUp = randomNumsX[i] - x1;
            }
        }
        //x down direction
        for (int x2 = randomNumsX[i]+1; x2 < xMap - 1; x2++)
        {
            if (charMap[x2][randomNumsY[i]] == 'w')
            {
                totalDistanceXDown = x2 - randomNumsX[i];
            }
        }
        //y left direction
        for (int y1 = randomNumsY[i]-1; y1 > 0; y1--)
        {
            if (charMap[randomNumsX[i]][y1] == 'w')
            {
                totalDistanceYLeft = randomNumsY[i] - y1; 
            }
        }
        //y right direction
        for (int y2 = randomNumsY[i]+1; y2 < yMap - 1; y2++)
        {
            if (charMap[randomNumsX[i]][y2] == 'w')
            {
                totalDistanceYRight = y2 - randomNumsY[i];
            }
        }
        /*
        cout << totalDistanceXUp << "\n";
        cout << totalDistanceXDown << "\n";
        cout << totalDistanceYLeft << "\n";
        cout << totalDistanceYRight << "\n"; 
        cout << "\n";
        */
        if (totalDistanceXUp < totalDistanceXDown){
            if (totalDistanceXUp < totalDistanceYLeft) {
                if (totalDistanceXUp < totalDistanceYRight) {
                    smallestDistance = totalDistanceXUp;
                    DirectonBuild = "Up";
                }
            }
        }
        if (totalDistanceXDown < totalDistanceXUp) {
            if (totalDistanceXDown < totalDistanceYLeft) {
                if (totalDistanceXDown < totalDistanceYRight) {
                    smallestDistance = totalDistanceXDown;
                    DirectonBuild = "Down";
                }
            }
        }
        if (totalDistanceYLeft < totalDistanceXUp) {
            if (totalDistanceYLeft < totalDistanceXDown) {
                if (totalDistanceYLeft < totalDistanceYRight) {
                    smallestDistance = totalDistanceYLeft;
                    DirectonBuild = "Left";
                }
            }
        }
        if (totalDistanceYRight < totalDistanceXUp) {
            if (totalDistanceYRight < totalDistanceXDown) {
                if (totalDistanceYRight < totalDistanceYLeft) {
                    smallestDistance = totalDistanceYRight;
                    DirectonBuild = "Right";
                }
            }
        }

        if (DirectonBuild == "Up")
        {
            for (int xBuild = randomNumsX[i] - 1; xBuild > 1; xBuild--)
            {
                charMap[xBuild][randomNumsY[i]] = 'w';

            }
        }
        if (DirectonBuild == "Down")
        {
            for (int xBuild2 = randomNumsX[i] + 1; xBuild2 < xMap - 1; xBuild2++)
            {
                charMap[xBuild2][randomNumsY[i]] = 'w';
                
            }
        }
        if (DirectonBuild == "Left")
        {

            for (int xBuild3 = randomNumsY[i] - 1; xBuild3 > 1; xBuild3--)
            {
                charMap[randomNumsX[i]][xBuild3] = 'w';

            }
        }
        if (DirectonBuild == "Right")
        {

            for (int xBuild4 = randomNumsY[i] + 1; xBuild4 < xMap - 1; xBuild4++)
            {
                charMap[randomNumsX[i]][xBuild4] = 'w';

            }
        }


        
        printf("hello");
        printf("\rbye");

        i++;
    }
    
}

void generateEntities() {
    //char charMap[xMap][yMap];
    for (int i = 1; i < xMap - 1; i++)
    {
        for (int j = 1; j < yMap - 2; j++)
        {
            //initial char starting position
            charMap[xMap - 3][xDoor] = 'P';

        }
    }
}


void displayGameWorld() {
    for (int i = 0; i < xMap; i++)
    {
        for (int j = 0; j < yMap; j++)
        {
            cout << charMap[i][j];
        }
    }
}

int main()
{
    Player player;


    
    //struct items* allitems;
    //allitems = (struct items*)malloc(sizeof(struct items));

    items* allitems = new items;
    //struct monsters* allEntities;
    //allEntities = (struct monsters*)malloc(sizeof(struct monsters));
    monsters* allEntities = new monsters;

    int status = 0;
    while (true)
    { 
        //3
        if (status == 3)
        {
            status = mainMenu();
        }
        if (status == 1)
        {
            status = start(player);
        }
        if (status == 0)
        {
            cout << "starting generating items & monsters\n";
            //allitems = generateItems(&allitems);
            *allitems = generateItems(allitems);
            *allEntities = generateMonsters(allEntities);
            status = 4;
            
        }
        if (status == 4)
        {
            cout << "starting generating map\n";
            generateGameMap();
            generateBlockers();
            generateEntities();
            displayGameWorld();
            exit(0);
        }
        if (status == 2)
        {
            exit(0);
        }

    }





















    /*
    Item arrow1;
    arrow1.name = "Iron Arrow";
    arrow1.weight = 1;
    arrow1.durability = 100;
    arrow1.rarity = 0;
    arrow1.type = "ammo";
    arrow1.material = "wood";

    Item arrow2("Rock Arrow", 1, 100, 0, "misc", "wood");
    Item stick1("Wooden Stick", 1, 100, 0, "misc", "wood");
    Item rock1("Small Rock", 1, 100, 0, "misc", "rock");
    Item sword1("Rusty Steel Sword", 3, 100, 0, "weapon", "steel");
    Item* stick2 = new Item("Slimy Wooden Stick", 1, 100, 0, "misc", "wood");

    Item backpack1;

    backpack1.name = "Old Leather Backpack";
    backpack1.weight = 10;
    backpack1.durability = 100;
    backpack1.rarity = 0;
    backpack1.type = "container";
    backpack1.material = "leather";
    backpack1.maxWeight = 10;

    //backCheck(backpack.type);

    Container backpack1_Container;
    backpack1_Container.containerLink = backpack1;

    backpack1_Container.addItem(arrow1);
    backpack1_Container.addItem(arrow2);
    backpack1_Container.addItem(sword1);
    backpack1_Container.addItem(rock1);
    backpack1_Container.addItem(stick1);
    backpack1_Container.addItem(*stick2);

    backpack1_Container.printContents();

    backpack1_Container.removeItem(arrow2);

    backpack1_Container.printContents();

    backpack1_Container.calcUsedWeight();
    string chainmailParts[3] = {"cotton", "steel", "leather"};
    Item armor1("Chainmail Armor", 15, 100, 0, "armor", chainmailParts);
    backpack1_Container.addItem(armor1);

    string leatherParts[3] = { "cotton", "leather" };
    Item armor2("Leather Armor", 1, 100, 0, "armor", leatherParts);
    backpack1_Container.addItem(armor2);
    */


}


