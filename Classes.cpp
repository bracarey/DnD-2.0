#include "StatRoller.h"
#include "Races.h"
#include <iostream>

using namespace std;

int rolls [6];

void dicePool(){
    int temp1;
    for (int i = 0; i < 6; i++)
    {
      rolls[i] = diceRoll();
    }
    for (int a = 0; a < 6; a++)
    {
        for (int b = a + 1; b < 6; b++)
        {
            if (rolls[b] < rolls[a])
            {
                temp1 = rolls[a];
                rolls[a] = rolls[b];
                rolls[b] = temp1;
            }
        }
    }
   cout << "Your sorted stat pool is :" << rolls[0] << ", " << rolls[1] << ", " << rolls[2] << ", " << rolls[3] << ", " << rolls[4] << ", " << rolls[5] << "\n \n";
}
void barbarian (int *Strength, int *Dexterity, int *Constitution, int *Intelligence, int *Wisdom, int *Charisma, int *Health){
    dicePool();
    *Strength += rolls[5];
    *Dexterity += rolls[3];
    *Constitution += rolls[4];
    *Intelligence += rolls[0];
    *Wisdom += rolls[1];
    *Charisma += rolls[2];
    *Health = 12;
}
void bard (int *Strength, int *Dexterity, int *Constitution, int *Intelligence, int *Wisdom, int *Charisma, int *Health){
    dicePool();
    *Strength += rolls[0];
    *Dexterity += rolls[3];
    *Constitution += rolls[4];
    *Intelligence += rolls[2];
    *Wisdom += rolls[1];
    *Charisma += rolls[5];
    *Health = 8;
}
void cleric (int *Strength, int *Dexterity, int *Constitution, int *Intelligence, int *Wisdom, int *Charisma, int *Health){
    dicePool();
    *Strength += rolls[0];
    *Dexterity += rolls[3];
    *Constitution += rolls[4];
    *Intelligence += rolls[1];
    *Wisdom += rolls[5];
    *Charisma += rolls[2];
    *Health = 8;
}
void druid (int *Strength, int *Dexterity, int *Constitution, int *Intelligence, int *Wisdom, int *Charisma, int *Health){
    dicePool();
    *Strength += rolls[0];
    *Dexterity += rolls[3];
    *Constitution += rolls[4];
    *Intelligence += rolls[2];
    *Wisdom += rolls[5];
    *Charisma += rolls[1];
    *Health = d8 (*Constitution);
}
void fighter (int *Strength, int *Dexterity, int *Constitution, int *Intelligence, int *Wisdom, int *Charisma, int *Health){
    dicePool();
    *Strength += rolls[5];
    *Dexterity += rolls[2];
    *Constitution += rolls[4];
    *Intelligence += rolls[0];
    *Wisdom += rolls[3];
    *Charisma += rolls[1];
    *Health = d12 (*Constitution);
}
void monk (int *Strength, int *Dexterity, int *Constitution, int *Intelligence, int *Wisdom, int *Charisma, int *Health){
    dicePool();
    *Strength += rolls[2];
    *Dexterity += rolls[5];
    *Constitution += rolls[4];
    *Intelligence += rolls[0];
    *Wisdom += rolls[3];
    *Charisma += rolls[1];
    *Health = d8 (*Constitution);
}
void paladin (int *Strength, int *Dexterity, int *Constitution, int *Intelligence, int *Wisdom, int *Charisma, int *Health){
    dicePool();
    *Strength += rolls[5];
    *Dexterity += rolls[1];
    *Constitution += rolls[3];
    *Intelligence += rolls[0];
    *Wisdom += rolls[2];
    *Charisma += rolls[4];
    *Health = d10 (*Constitution);
}
void ranger (int *Strength, int *Dexterity, int *Constitution, int *Intelligence, int *Wisdom, int *Charisma, int *Health){
    dicePool();
    *Strength += rolls[0];
    *Dexterity += rolls[5];
    *Constitution += rolls[4];
    *Intelligence += rolls[2];
    *Wisdom += rolls[3];
    *Charisma += rolls[1];
    *Health = d10 (*Constitution);
}
void rogue (int *Strength, int *Dexterity, int *Constitution, int *Intelligence, int *Wisdom, int *Charisma, int *Health){
    dicePool();
    * Strength += rolls[0];
    *Dexterity += rolls[5];
    *Constitution += rolls[4];
    *Intelligence += rolls[1];
    *Wisdom += rolls[2];
    *Charisma += rolls[3];
    *Health = d8 (*Constitution);
}
void sorcerer (int *Strength, int *Dexterity, int *Constitution, int *Intelligence, int *Wisdom, int *Charisma, int *Health){
    dicePool();
    *Strength += rolls[0];
    *Dexterity += rolls[3];
    *Constitution += rolls[4];
    *Intelligence += rolls[1];
    *Wisdom += rolls[2];
    *Charisma += rolls[5];
    *Health = d6 (*Constitution);
}
void warlock (int *Strength, int *Dexterity, int *Constitution, int *Intelligence, int *Wisdom, int *Charisma, int *Health){
    dicePool();
    *Strength += rolls[0];
    *Dexterity += rolls[3];
    *Constitution += rolls[4];
    *Intelligence += rolls[2];
    *Wisdom += rolls[1];
    *Charisma += rolls[5];
    *Health = d8 (*Constitution);
}
void wizard (int *Strength, int *Dexterity, int *Constitution, int *Intelligence, int *Wisdom, int *Charisma, int *Health){
    dicePool();
    *Strength += rolls[0];
    *Dexterity += rolls[3];
    *Constitution += rolls[4];
    *Intelligence += rolls[5];
    *Wisdom += rolls[2];
    *Charisma += rolls[1];
    *Health = d6 (*Constitution);
}
