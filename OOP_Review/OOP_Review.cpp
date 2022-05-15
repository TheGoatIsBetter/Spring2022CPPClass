// OOP_Review.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//preprocessor directives to include different files and libraries
#include <iostream>
#include "Ninja.h"
#include "Pirate.h"
#include <string>

int main()
{
	//create Ninja and Pirate objects with the names Nin and Pete respectively
	Ninja Nin((std::string)"Nin");
	Pirate Pete((std::string)"Pete");

	//Have Nin and Pete say hello
	Nin.Talk(Nin.name,"HELLO");
	Pete.Talk(Pete.name,"Hello");

	//have then throw/swing their weapons
	Nin.Shuriken();
	Pete.SwingSword();

	//and then display their stats
	Nin.DisplayStats();
	Pete.DisplayStats();

	//since this is the end, they will also be destroyed

	return 0;
}
