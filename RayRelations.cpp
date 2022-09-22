#include <iostream>
#include <cstdlib>
using namespace std;

void compareRays(int* ray1, int* ray2);

/*
* AUTHOR:JACK TAYLOR
* PROGRAM:RAYRELATIONS
* PROGRAM PURPOSE:COMPARE TWO INTEGER ARRAYS, IF THEY ARE SIMILAR ENOUGH THEY ARE CONSIDERED TO BE 
* RELATED, THIS PROGRAM CAN AND WILL BE MEANT TO BE USED AS A METHOD IN OTHER PROGRAMS TO COMPARE DATA IN 
* ARRAYS IF ANOTHER PERSON IS TO USE THIS CODE IN ONE OF THEIR PROGRAMS THEY ARE TO GIVE PROPER CREDIT TO 
* THE ORIGINAL AUTHOR OF CODE IN ORDER FOR IT TO BE USED IN PROGRAM
*/
int main() {
	int* ray1 = new int[2];
	int* ray2 = new int[2];
	compareRays(ray1, ray2);
	return 0;
}

void compareRays(int* ray1, int* ray2) {
	int minToBeRelated = 0;
	if (sizeof(ray1) != sizeof(ray2)) {
		cout << "Arrays are not equal lengths, to compare lengths of arrays must be equal, goodbye." << endl;
		return;
	}
	else
	{
		// gets data in bytes to convert from bytes to integers specifically divide by 4
		minToBeRelated = (sizeof(ray1) / 2) / 4 + 1;
	}
	cout << minToBeRelated << endl;
}