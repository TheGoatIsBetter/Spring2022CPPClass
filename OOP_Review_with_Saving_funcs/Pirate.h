//preprocessor directives to include different files and libraries
#pragma once
#include "Character.h"

//creates a pirate class that derives from Character class
class Pirate : public Character
{
public:
	Pirate(string); //create
	~Pirate(); //destroy when done with everything else
	void SwingSword(); //sword swinging print
	int Attack(); //attacks/returns for 25 hp
	void Help(); //gets help on what Pirate does
};

