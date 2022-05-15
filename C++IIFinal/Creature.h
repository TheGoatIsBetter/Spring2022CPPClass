#pragma once
#include <string>

using namespace std;

//function and class prototypes... makes things load during preprocessor directives... is faster

class Creature {
public:
	string getName();
	int getHealth();
	void setHealth(int hp);
	void display();

protected:
	string name;
	int health;
	int attack;

};