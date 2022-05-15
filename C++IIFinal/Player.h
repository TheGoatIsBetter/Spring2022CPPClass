#pragma once
#include "Creature.h"
#include <string>

using namespace std;

//function and class prototypes... makes things load during preprocessor directives... is faster

class Player : public Creature {
private:
	int attack;

public:
	Player(string name, int health, int attack);
	int getAttack();

};