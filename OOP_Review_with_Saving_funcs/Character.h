//preprocessor directives to include different files and libraries
#pragma once
#include <string>
#include "GameStructure.h"

using namespace std;

//creates a character class that derives from GameStructure class... 
//because the assignment said to, though GameStructure class does nothing...
class Character : public GameStructure
{
public:
	//every character has a name, Talk function, and a DisplayStats function
	string name;
	void Talk(string name, string stuffToSay);  //prints words next to character name
	void Talk(string name, string othername, string stuffToSay); //assignment says to make them both the same... why?  This is better
	void DisplayStats(); //displays character stats
	Character();
	int GetHealth(); //gets character health
	void SetHealth(int hp); //sets character healths
	int Attack(); //attacks with character
	void Help(); //abstract to get help for each character
private:
	//privately, they also have health.
	int health;
};

