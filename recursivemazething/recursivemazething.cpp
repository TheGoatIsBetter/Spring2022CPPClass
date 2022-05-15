#include <iostream>
#include <cstdio>
#include <vector>
#include <random>

using namespace std;


//A non-recursive maze I made because it is easier to translate this to a recursive maze than do a non-recursive one from scratch.
// This does work, though it needs to be run through the printMaze function to display.
//vector<vector<char>> nonRecursiveMaze(vector<vector<char>> maze, int width, int height) {
//	for (int i = 0; i < maze.size(); i++) {
//		for (int j = 0; j < maze[i].size(); j++) {
//			cout << maze[i][j];
//
//			if (maze[i][j] != '#' && maze[i][j] != ' ') {
//				int isWall = rand() > (RAND_MAX / 2);
//				if (isWall == 1) {
//					maze[i][j] = '#';
//				}
//				else {
//					maze[i][j] = ' ';
//				}
//			}
//		}
//		cout << endl;
//	}
//
//
//	return maze;
//}


//prints non-recursive maze
//void printMaze(vector<vector<char>> maze) {
//	for (int i = 0; i < maze.size(); i++) {
//		for (int j = 0; j < maze[i].size(); j++) {
//			cout << maze[i][j];
//		}
//		cout << endl;
//	}
//}

//A maze that prints itself.  If I tried to have it return to a 2D Vector array it would crash for some reason?
//	It prints itself regardless.
void recursiveMaze(vector<vector<char>> maze, int width, int height, int xSpot, int ySpot) {
	//if the spot in the maze is not decided,
	if (maze[xSpot][ySpot] != '#' && maze[xSpot][ySpot] != ' ') {
		//randomize whether it is a wall or space,
		int isWall = rand() > (RAND_MAX / 2);
		if (isWall == 1) {
			//and set it to that.
			maze[xSpot][ySpot] = '#';
		}
		else {
			//and set it to that.
			maze[xSpot][ySpot] = ' ';
		}
	}

	//print the current location's tile
	cout << maze[xSpot][ySpot];

	//if the current x is at the maximum x, and the current y is not at the maximum y,
	if (xSpot == width-1 && ySpot != height-1)
	{
		//reset the x position
		xSpot = 0;
		//and increase the y position
		ySpot++;
		//while carriage returning the line
		cout << endl;
	}
	else
		//otherwise, increase the x position
		xSpot++;
	

	//if the x and y are both at the maximum x and y
	if(xSpot == width-1 && ySpot == height-1)
		//exit the recursion
		return;
	else
		//otherwise, call itself again with the new x and y positions
		recursiveMaze(maze, width, height, xSpot, ySpot);
	
}

//creates a maze with set dimensions by calling a recursive function
vector<vector<char>> createMaze(int width, int height) {
	//create the 2D vector array to be used for the maze
	vector<vector<char>> maze(width, vector<char>(height, 1));

	//call the recursive maze generator
	recursiveMaze(maze, width, height, 0, 0);

	//exit the function
	//NOTE: Will only return a full maze if making a non-recursive maze
	//	recursive mazes break the return keyword on their function for some reason?
	//	Not even the internet has helped me fix that problem...
	return maze;
}






int main() {
	//create a maze of dimensions 25x25
	vector<vector<char>> maze = createMaze(30, 30);

	cout << "\n\n\n";

	//create a maze of dimensions 30x30
	vector<vector<char>> maze2 = createMaze(25, 25);

}