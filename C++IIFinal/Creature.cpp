#include "Creature.h"
#include <string>
#include <iostream>

using namespace std;

//name getter
string Creature::getName()
{
	return name;
}

//health getter
int Creature::getHealth() 
{
	return health;
}

//health setter
void Creature::setHealth(int hp)
{
	health = hp;
	return;
}

//creature stat display
void Creature::display()
{
	cout << "###########" << endl;
	cout << "Name: " << name << endl;
	cout << "Health: " << health << endl;
	cout << "###########" << endl;

}
