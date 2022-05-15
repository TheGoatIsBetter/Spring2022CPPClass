//preprocessor directives to include different files and libraries
#include "Pirate.h"
#include <iostream>

using namespace std;

//init function takes char_name as an argument for a name, and then says the Pirate has been created
Pirate::Pirate(string char_name)
{
	name = char_name;

	cout << "Pirate " << name << " created" << endl;
	return;
}

//destroys Pirate when everything else is done
Pirate::~Pirate()
{
	cout << "Pirate " << name << " destroyed" << endl;
	return;
}

//function that prints that the pirate swings his sword
void Pirate::SwingSword()
{
	cout << "Pirate swings his sword" << endl;
	return;
}

//function that returns 25 for use in removing hp, due to an attack
int Pirate::Attack()
{
	return 25;
}

//gets help on what Pirate does
void Pirate::Help()
{
	cout << "Pirate's are cool, they can swing cutlasses.  I wonder how they'd fare against ninjas..." << endl;
}