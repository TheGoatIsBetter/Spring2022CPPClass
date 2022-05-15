#pragma once
#include <vector>
#include <string>

using namespace std;

//function and class prototypes... makes things load during preprocessor directives... is faster

class Menus
{
public:
	void Intro();
	char Choice(int size, const vector<string> &options, const vector<char>& actions);
	void Wait();
	void Clear();
};