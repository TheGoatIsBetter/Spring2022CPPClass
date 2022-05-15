// Struct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>


using namespace std;

typedef struct Soppy { //Soppy the struct
    double x;
    double y;
};


int main()
{
    Soppy sop;
    cout << sop.x << endl; //sop sop
    cout << sop.y << endl; //sop sop sop sop
}

