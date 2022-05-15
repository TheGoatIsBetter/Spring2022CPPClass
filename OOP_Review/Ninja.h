//preprocessor directives to include different files and libraries
#pragma once
#include "Character.h"

//creates a ninja class that derives from Character class
class Ninja : public Character
{
public:
	Ninja(string); //create
	~Ninja();//destroy when done with everything else
	void Shuriken(); //shuriken print
	int Attack(); //attacks/returns for 25 hp
	void Help(); //gets help on what Ninja does
};

