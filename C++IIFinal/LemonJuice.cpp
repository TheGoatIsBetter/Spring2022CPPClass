#include "LemonJuice.h"
#include <iostream>
#include <string>

using namespace std;

LemonJuice::LemonJuice(string pName, int health, int atk)
{
	//name, health, and attack are all included in a player
	name = pName;
	setHealth(health);
	attack = atk;

}

//attack getter
int LemonJuice::getAttack()
{
	return attack;
}

//helpless description
void LemonJuice::helplessDesc(string desc) 
{
	cout << desc << endl;
}
