#include "Player.h"

using namespace std;

//player constructor
Player::Player(string pName, int health, int atk)
{
	//name, health, and attack are all included in a player
	name = pName;
	setHealth(health);
	attack = atk;

}

//attack getter
int Player::getAttack()
{
	return attack;
}
