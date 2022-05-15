// OOP_R;eview.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
// 
//preprocessor directives to include different files and libraries
#include <iostream>
#include <fstream>
#include "Ninja.h"
#include "Pirate.h"
#include <string>

using namespace std;

//global for reasons stated above save and load reading and writing... essentially I'm not sure how to avoid
// recursive prerequisites... and while I know I could probably fix this with pointers and references,
// I'm not sure how... for the purpose of the assignment, this does everything needed...
//create Ninja and Pirate objects with the names Nin and Pete respectively
Ninja Nin((std::string)"Nin");
Pirate Pete((std::string)"Pete");

void Save(int saveIndex) {
	try {
		//makes sure index is in range of 4, prevents too many saves from being possible
		if (saveIndex > 4 || saveIndex < 0) {
			throw saveIndex;
		}

		ofstream save; //creates file object
		string saveFile = "Save"; //sets filename to Save
		saveFile.append(to_string(saveIndex)); //appends the index to the end of the filename
		saveFile.append(".txt"); //uses a basic txt file for demonstration before I learn C++ JSON or something

		//overwrite current save
		save.open(saveFile); //opens the filename for overwriting
		save << "";
		save.close();

		save.open(saveFile, ios::app); //opens the filename for appending

		//hardcoded object saves... C++ doesn't natively have pickle and I'm sad about it... and don't feel like
		//looking for a solution to that right now and this is the simulation I chose...
		save << Nin.name << endl;
		save << Nin.GetHealth() << endl;
		save << Pete.name << endl;
		save << Pete.GetHealth() << endl;


		//close the file
		save.close();
	}
	//catch outsidebounds error
	catch (int saveIndex) {
		cout << "Save index is too big or too small.  Save Index was " << saveIndex << "..." << endl;
	} //catch any other error
	catch (...) {
		cout << "Please give Save() an integer...";
	}
	
}

void Load(int saveIndex) {
	try {
		//makes sure index is in range of 4, prevents too many saves from being possible
		if (saveIndex > 4 || saveIndex < 0) {
			throw saveIndex;
		}


		ifstream load; //creates file object
		string saveFile = "Save"; //sets filename to Save
		saveFile.append(to_string(saveIndex)); //appends the index to the end of the filename
		saveFile.append(".txt"); //uses a basic txt file for demonstration before I learn C++ JSON or something
		load.open(saveFile); //opens the filename for output

		//if the file is open, get each line through while
		string line;
		if (load.is_open()) {
			int lineNum = 0;
			while (getline(load,line)) {
				cout << "Loading..." << endl;
				//hardcoded values due to reasons stated at top global variables
				//also I feel like this is a jank solution but my google fu is not strong enough
				//to find another...
				lineNum += 1;
				//gets line number through iteration and uses if statements to set different variables... due to
				//different lengths this seemed like the only way...
				if (lineNum == 1)
					Nin.name = line;
				if (lineNum == 2)
					Nin.SetHealth(stoi(line));
				if (lineNum == 3)
					Pete.name = line;
				if (lineNum == 4)
					Pete.SetHealth(stoi(line));
			}
		}

		//close file
		load.close();

	}
	//catch outsidebounds error
	catch (int saveIndex) {
		cout << "Save index is too big or too small.  Save Index was " << saveIndex << "..." << endl;
	} //catch any other error
	catch (...) {
		cout << "Please give Save() an integer...";
	}
}



int main()
{
	
	//Have Nin and Pete say hello
	Nin.Talk(Nin.name,"HELLO");
	Pete.Talk(Pete.name,"Hello");

	//Save(0); //initial save for demonstrational purposes


	Load(0); //loads default save done above

	//have then throw/swing their weapons
	Nin.Shuriken();
	Pete.SetHealth(Pete.GetHealth() - Nin.Attack()); //set pete new health
	Pete.SwingSword();

	Save(0); //saves Pete's new health to file

	//and then display their stats
	Nin.DisplayStats();
	Pete.DisplayStats();

	//since this is the end, they will also be destroyed

	return 0;
}
