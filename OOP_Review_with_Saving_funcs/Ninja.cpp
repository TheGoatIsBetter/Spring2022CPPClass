//preprocessor directives to include different files and libraries
#include "Ninja.h"
#include <iostream>

using namespace std;

//init function takes char_name as an argument for a name, and then says the Ninja has been created
Ninja::Ninja(string char_name) {
	name = char_name;

	cout << "Ninja " << name << " created" << endl;
	return;
}

//destroys Ninja when everything else is done
Ninja::~Ninja()
{
	cout << "Ninja " << name << " destroyed" << endl;
	return;
}

//function that prints that the Ninja is throwing shuriken
void Ninja::Shuriken()
{
	cout << "Ninja throws shuriken" << endl;
	return;
}

//function that returns 25 for use in removing hp, due to an attack
int Ninja::Attack()
{
	return 25;
}

//gets help on what Ninja does
void Ninja::Help()
{
	cout << "Ninja's are cool, they can throw shuriken.  I wonder how they'd fare against pirates..." << endl;
}
