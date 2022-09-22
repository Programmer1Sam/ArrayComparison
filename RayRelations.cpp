#include <iostream>
#include <cstdlib>
#include <array>
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
	int rayLength;
	int tempNum; 

	cout << "Enter max length for rays: ";
	cin >> rayLength;

	int* ray1 = new int[rayLength];
	int* ray2 = new int[rayLength];
	for (int i = 0; i < rayLength; i++) {
		cout << "Array1 index " << i + 1 << ": ";
		cin >> tempNum;
		ray1[i] = tempNum;
	}

	for (int i = 0; i < rayLength; i++) {
		cout << "Array2 index " << i + 1 << ": ";
		cin >> tempNum;
		ray2[i] = tempNum;
	}
	compareRays(ray1, ray2); 
	return 0;
}

/*
* Compares two arrays and considers if they can be related, for it to be related it must be at least
* a 50% match to be considered related, if less it is considered not related. The data does not have to
* be in the same index but it must be in both arrays
*/ 
void compareRays(int* ray1, int* ray2) {
	int minToBeRelated = 0;
	int matches = 0;
	if (sizeof(ray1) != sizeof(ray2)) {
		cout << "Arrays are not equal lengths, to compare lengths of arrays must be equal, goodbye." << endl;
		return;
	}
	else
	{
		// gets data in bytes to convert from bytes to integers specifically divide by 4
		minToBeRelated = (sizeof(ray1) / 2) / 4;
	}

	for (int i = 0; i < sizeof(ray1) / 4; i++) {
		for (int j = 0; j < sizeof(ray2) / 4; j++) {
			if (ray1[i] == ray2[j]) {
				matches++;
			}
		}
	}

	if (matches >= minToBeRelated) {
		cout << "The two arrays contain enough similarities to be related." << endl;
	}
	else {
		cout << "Not enough similarities for the two arrays to be considered related." << endl;
	}
}