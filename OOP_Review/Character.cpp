//preprocessor directives to include different files and libraries
#include "Character.h"
#include <string>
#include <iostream>

using namespace std;

//init function that gives every character 100 health by default
Character::Character() {
	health = 100;
}

//getter for private variable 'health's
int Character::GetHealth()
{
	return health;
}

//function that sets health.  If less than 0 make it 0 and say that the character has expired.
void Character::SetHealth(int hp)
{
	if (hp < 0) {
		hp = 0;
		cout << "Character has expired..." << endl;
	}
	health = hp;
}

//function that returns 10 for use in removing hp, due to an attack
int Character::Attack()
{
	return 10;
}

//abstract method for getting help on how to do things
void Character::Help()
{
}

//takes a name and stuff to say, so all characters can talk
void Character::Talk(string name, string stuffToSay)
{
	cout << name << ": " << stuffToSay << endl;
}

void Character::Talk(string name, string othername, string stuffToSay)
{
	cout << name << ": " << othername << ", " << stuffToSay << endl;
}

//displays character stats
void Character::DisplayStats() {
	cout << "Name   - " << name << endl;
	cout << "Health - " << health << endl;
}
