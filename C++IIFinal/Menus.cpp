#include "Menus.h"
#include <iostream>
#include <string>

using namespace std;

//title screen display text
void Menus::Intro()
{
	cout << "####################################" << endl;
	cout << "This is a combat simulator." << endl;
	cout << "Here, you will learn to fight." << endl;
	cout << "Press the designated buttons to" << endl;
	cout << "either stand still, or punch." << endl;
	cout << "Then press 'Enter' to progress." << endl;
	cout << "the screen.  Start by doing so here." << endl;
	cout << "###################################" << endl;

	Wait(); //waits for player input
}


//validates choices from inputted vector lists
char Menus::Choice(int size, const vector<string>& options, const vector<char>& actions)
{
	//displays all options in the vector list, as well as their respective character symbols
	cout << "Options:\n";
	for (int i = 0; i < size; i++) {
		cout << "'" << options[i] << "'" << " : " << actions[i] << endl;
	}

	//sets a default result and then asks for a result
	char result = ' ';
	cin >> result;

	//exception handling for the case that the result gotten is not valid
	try {
		//checks the result gotten agains the possible actions
		for (int i = 0; i < size; i++) {
			if (result == actions[i]) {
				//if it is a possible action, simply return it
				return result;
			}
		}
		//otherwise, throw an exception of the result
		throw (result);
	}
	//catch the result exception
	catch(char result){
		//clear cin buffer
		cin.ignore(INT_MAX, '\n');

		//clear the screen
		Clear();

		//recursively ask the question if the input is not valid
		Choice(size, options, actions);
	}
}

//waits for the player to press enter and displays a message it is doing such
void Menus::Wait() {
	cout << "\nPress 'Enter' to Continue..." << endl;
	cin.ignore(INT_MAX, '\n');
	cin.get();
	Clear();
}

//clears console
void Menus::Clear()
{
	//an efficient way of clearing the console without breaking anything.
	//https://www.delftstack.com/howto/cpp/how-to-clear-console-cpp/
	cout << "\x1B[2J\x1B[H";
}
