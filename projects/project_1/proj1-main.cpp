/**
 * file: proj1-main.cpp
 * author: Brendon Newton
 * course: CSI 1440
 * assignment: Project 1
 * due date: 1/23/2023
 * 
 * date modified: 1/21/2023
 * 		- main started and finished
 * 
 * date modified: 1/19/2023
 * 		- file created
 * 
 * Indirect Sorting
 */
#include "proj1-person.hpp"
#include <fstream>

using namespace std;

const int MAX_NUM = 25;

int main() {
	ifstream inFS;
	Person thePeople[MAX_NUM];
	Person* referenceToThePeople[MAX_NUM];

	inFS.open("people.dat");
	if (!inFS.is_open()) {
		cout << "Error: File not open" << endl;
	}

	int numPeople = 0;

	//Reads all people from file and counts them
	while (getAPersonFromStream(inFS, &thePeople[numPeople])) {
		numPeople++;
	}

	inFS.close();

	//Fills reference array with references to people array
	for (int i = 0; i < numPeople; i++) {
		referenceToThePeople[i] = &thePeople[i];
	}

	sortPersonArrayByName(referenceToThePeople, numPeople);

	int numDisplay = 5;

	//If number of people is less than five, adjusts 
	if (numPeople < 5) {
		numDisplay = numPeople;
	}

	//Displays first five people by name
	for (int i = 0; i < numDisplay; i++) {
		displayAPerson(cout, referenceToThePeople[i]);
	}

	sortPersonArrayByAge(referenceToThePeople, numPeople);

	//Displays first five people by age
	for (int i = 0; i < numDisplay; i++) {
		displayAPerson(cout, referenceToThePeople[i]);
	}

	string key;
	getline(cin, key);
	
	//Gets and displays a person until "no more" is entered
	while (key != "no more") {
		Person* temp = findAPerson(referenceToThePeople, numPeople, key);
		displayAPerson(cout, temp);
		getline(cin, key);
	}

	return 0;
}
