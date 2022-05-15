#include <iostream>
#include "Player.h"
#include "LemonJuice.h"
#include "Menus.h"
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	//creates a menu object
	Menus Menu;

	//displays an intro to the sim
	Menu.Intro();

	//creates a player and a lemon juice character
	Player p1("Jeff", 10, 2);
	LemonJuice LJ("Lemime", 10, 2);


	while (true) {
		//displays character stats
		cout << "Player:" << endl;
		p1.display();
		cout << "\nEnemy:" << endl;
		LJ.display();
		cout << endl << endl;

		//vectors for the player choices, both what they display and what to input
		vector<string> opts{ "Punch","Stand Still" };
		vector<char> acts{ 'a','b' };
		char choice = Menu.Choice(2, opts, acts); //validates said input

		cout << endl;

		//choice outcomes
		if (choice == 'a') {
			LJ.setHealth(LJ.getHealth() - p1.getAttack());
			cout << "You just punched " << LJ.getName() << " right in the face!  Wait... does Lemon Juice have a face?" << 
			"\nRegardless, you do " << p1.getAttack() << " damage." << endl;
		}
		else if (choice == 'b') {
			cout << "You just stood there... waiting to be hit..." << endl;
		}

		//randomizes damage for the lemon juice from 1 to it's attack power
		srand(time(NULL));
		int rngDmg = rand() % LJ.getAttack() + 1;

		//applies the damage to the player
		p1.setHealth(p1.getHealth() - rngDmg);

		cout << "\nMeanwhile, " << LJ.getName() << " splashes you with it's citrusy body... doing " << rngDmg << " damage..." << endl;

		//displays a "helpless lemon juice text"
		LJ.helplessDesc("The lemon juice is helpless... why...");

		//waits for player input and displays that it is doing as such
		Menu.Wait();

		//if someone died, break the while loop to print death/victory screen
		if (LJ.getHealth() <= 0 || p1.getHealth() <= 0) {
			break;
		}
	}


	//victory screens for the 3 possible scenarios in order; you both die, you win, the lemon juice wins.
	//each clears the screen and prints a death message
	if (LJ.getHealth() <= 0 && p1.getHealth() <= 0) {
		Menu.Clear();
		cout << "Well... you and " << LJ.getName() << " killed each other... that's that I guess..." << endl;
	}
	else if (LJ.getHealth() <= 0) {
		Menu.Clear();
		cout << "Well, you beat " << LJ.getName() << " in a fight to the death.  Congratulations I guess." << endl;
	}
	if (p1.getHealth() <= 0) {
		Menu.Clear();
		cout << "Dude... you just lost a fight against lemon juice..." << endl;
	}

}

