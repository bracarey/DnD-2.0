#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <fstream>
#include "StatRoller.h"
#include "Classes.h"
#include "Races.h"


using namespace std;

int main()
{
    srand(time(0));

    //variable declarations
    int Strength = 0;
    int Dexterity = 0;
    int Constitution = 0;
    int Intelligence = 0;
    int Wisdom = 0;
    int Charisma = 0;
    int Health = 0;
    string Name;
    string PlayerRace;
    string PlayerClass;
    string SubRace;
    bool isValidClass = false;
    bool isValidRace = false;
    //main body

    cout << "Hello, and thank you for choosing my 5th Edition Dungeons and Dragons Character Generator. Lets start by having you name your new character. \n";
    getline(cin, Name);
    do{
        cout << "Lets choose your race. You can choose from the following: Human, Elf, Dwarf, Halfling, Gnome, Half-Orc, Dragonborn, or Tiefling.\n";
        getline(cin, PlayerRace);
        if (PlayerRace == "Human"){
            human(&Strength, &Dexterity, &Constitution, &Intelligence, &Wisdom, &Charisma);
            isValidRace = true;
        }
        else if (PlayerRace == "Elf"){
            cout << "Which sub race would you like to be: Drow, High, or Wood? \n";
            getline(cin, SubRace);
            if (SubRace == "Drow"){
                drow(&Dexterity, &Charisma);
                isValidRace = true;
                PlayerRace = "Drow (Dark Elf)";
            }
            else if (SubRace == "High"){
                high(&Dexterity, &Intelligence);
                isValidRace = true;
                PlayerRace = "High Elf";
            }
            else if (SubRace == "Wood"){
                wood(&Dexterity, &Wisdom);
                isValidRace = true;
                PlayerRace = "Wood Elf";
            }
            else {
                cout << SubRace << " is not a valid selection. Please try again.\n";
                isValidClass = false;
            }
        }
        else if (PlayerRace == "Dwarf")
        {
            cout << "Which sub race would you like to be: Hill or Mountain? \n";
            getline(cin, SubRace);
            if (SubRace == "Hill"){
                hill(&Constitution, &Wisdom);
                isValidRace = true;
                PlayerRace = "Hill Dwarf";
            }
            else if (SubRace == "Mountain"){
                mountian(&Strength, &Constitution);
                PlayerRace ="Mountain Dwarf";
                isValidRace = true;
            }
            else {
                cout << SubRace << " is not a valid selection. Please try again.\n";
                isValidClass = false;
            }
        }
        else if (PlayerRace == "Halfling")
        {
            cout << "Which sub race would you like to be: 1 for Lightfoot, or 2 for Stout? \n";
            getline(cin, SubRace);
            if (SubRace == "Lightfoot"){
                lightfoot(&Dexterity, &Wisdom);
                isValidRace = true;
                PlayerRace = "Lightfoot Halfling";
            }
            else if (SubRace =="Stout"){
                stout(&Dexterity, &Constitution);
                isValidRace = true;
                PlayerRace = "Stout Halfling";
            }
            else {
                cout << SubRace << " is not a valid selection. Please try again.\n";
                isValidClass = false;
            }
        }
        else if (PlayerRace == "Gnome")        {
            gnome(&Constitution, &Intelligence);
            isValidRace = true;
            PlayerRace = "Gnome";
        }
        else if (PlayerRace == "Half-Orc")        {
            halforc(&Strength, &Constitution);
            isValidRace = true;
            PlayerRace = "Half-Orc";
        }
        else if (PlayerRace == "Dragonborn")        {
            dragonborn(&Strength, &Charisma);
            isValidRace = true;
            PlayerRace = "Dragonborn";
        }
        else if (SubRace == "Tiefling")	{
            tiefling(&Intelligence, &Charisma);
            isValidRace = true;
            PlayerRace ="Teifling";
        }
       else {
            cout << PlayerRace << " is not a valid selection. Please try again.\n";
            isValidRace = false;
        }
    }while (isValidRace == false);

    do {
        cout << "Lets choose your class. You can be a: Barbarian, Bard, Cleric, Druid, Fighter, Monk, Paladin, Ranger, Rogue, Sorcerer, Warlock, or Wizard.\n";
        getline(cin, PlayerClass);
        if (PlayerClass == "Barbarian")
        {
            barbarian (&Strength, &Dexterity, &Constitution, &Intelligence, &Wisdom, &Charisma, &Health);
            isValidClass = true;
        }
        else if (PlayerClass == "Bard")
        {
            bard (&Strength, &Dexterity, &Constitution, &Intelligence, &Wisdom, &Charisma, &Health);
            isValidClass = true;
        }
        else if (PlayerClass == "Cleric")
        {
            cleric (&Strength, &Dexterity, &Constitution, &Intelligence, &Wisdom, &Charisma, &Health);
            isValidClass = true;
        }
         else if (PlayerClass == "Druid"){
            druid (&Strength, &Dexterity, &Constitution, &Intelligence, &Wisdom, &Charisma, &Health);
            isValidClass = true;
        }
        else if (PlayerClass == "Fighter"){
            fighter (&Strength, &Dexterity, &Constitution, &Intelligence, &Wisdom, &Charisma, &Health);
            isValidClass = true;
        }
         else if (PlayerClass == "Monk"){
            monk (&Strength, &Dexterity, &Constitution, &Intelligence, &Wisdom, &Charisma, &Health);
            isValidClass = true;
        }
        else if (PlayerClass == "Paladin"){
            paladin (&Strength, &Dexterity, &Constitution, &Intelligence, &Wisdom, &Charisma, &Health);
            isValidClass = true;
        }
         else if (PlayerClass == "Ranger"){
            ranger (&Strength, &Dexterity, &Constitution, &Intelligence, &Wisdom, &Charisma, &Health);
            isValidClass = true;
        }
         else if (PlayerClass == "Rogue"){
            rogue (&Strength, &Dexterity, &Constitution, &Intelligence, &Wisdom, &Charisma, &Health);
            isValidClass = true;
        }
         else if (PlayerClass == "Sorcerer"){
            sorcerer (&Strength, &Dexterity, &Constitution, &Intelligence, &Wisdom, &Charisma, &Health);
            isValidClass = true;
        }
        else if (PlayerClass == "Warlock"){
            warlock (&Strength, &Dexterity, &Constitution, &Intelligence, &Wisdom, &Charisma, &Health);
            isValidClass = true;
        }
        else if (PlayerClass == "Wizard"){
            wizard (&Strength, &Dexterity, &Constitution, &Intelligence, &Wisdom, &Charisma, &Health);
            isValidClass = true;
        }
        else {
            cout << PlayerClass << " is not a valid selection. Please try again.\n";
            isValidClass = false;
        }
    }while (isValidClass==false);

    int StrengthMod = modifier (Strength);
    int DexterityMod = modifier (Dexterity);
    int ConstitutionMod = modifier (Constitution);
    int IntelligenceMod = modifier (Intelligence);
    int WisdomMod = modifier (Wisdom);
    int CharismaMod = modifier (Charisma);

    cout << "You are " << Name << ", the "<< PlayerRace << " "<< PlayerClass << ".\nYour stat block is the following: \n" <<
            "    Your Strength is " << Strength << ", with a modifier of " << StrengthMod << ".\n" <<
            "    Your Dexterity is " << Dexterity << ", with a modifier of " << DexterityMod << ".\n" <<
            "    Your Constitution is " << Constitution << ", with a modifier of " << ConstitutionMod << ".\n" <<
            "    Your Intelligence is " << Intelligence << ", with a modifier of " << IntelligenceMod << ".\n" <<
            "    Your Wisdom is " << Wisdom << ", with a modifier of " << WisdomMod << ".\n" <<
            "    Your Charisma is " << Charisma << ", with a modifier of " << CharismaMod << ".\n" <<
            "    Your starting Max Hit-points are " << Health + ConstitutionMod <<". \n \n";

    ofstream outputFile;
    outputFile.open("Character Rolls.txt", ios::app);
    outputFile << "You are " << Name << ", the "<< PlayerRace << " "<< PlayerClass << ".\nYour stat block is the following: \n" <<
              "    Your Strength is " << Strength << ", with a modifier of " << StrengthMod << ".\n" <<
              "    Your Dexterity is " << Dexterity << ", with a modifier of " << DexterityMod << ".\n" <<
              "    Your Constitution is " << Constitution << ", with a modifier of " << ConstitutionMod << ".\n" <<
              "    Your Intelligence is " << Intelligence << ", with a modifier of " << IntelligenceMod << ".\n" <<
              "    Your Wisdom is " << Wisdom << ", with a modifier of " << WisdomMod << ".\n" <<
              "    Your Charisma is " << Charisma << ", with a modifier of " << CharismaMod << ".\n" <<
              "    Your starting Max Hit-points are " << Health + ConstitutionMod <<". \n \n";
    outputFile.close();
    cout<< "Thank you for using this. I hope you enjoy your new D&D character.";

    system("Pause");

    return 0;
}
