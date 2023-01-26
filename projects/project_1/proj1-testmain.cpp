/**
 * file: proj1-testmain.cpp
 * author: Brendon Newton
 * course: CSI 1440
 * assignment: Project 1
 * due date: 1/23/2023
 * 
 * date modified: 1/21/2023
 * 		- sample arrays created
 * 		- stream functionality tests created and passed
 * 		- age sort tests created and passed
 * 		- name sort tests created and passed
 * 		- findAPerson tests created and passed
 * 		- displayAPerson tests created and passed
 * 
 * date modified: 1/19/2023
 * 		- file created
 * 		- tests made to check function output and fix bugs
 * 
 * Indirect Sorting - Testbench
 */
#include "proj1-person.hpp"
#include <sstream>

using namespace std;

const int PEOPLE_TEST = 19;
const int SMALL_TEST = 4;

bool areEqualNames(Person**, Person*, int);
bool areEqualAges(Person**, Person*, int);

int main() {
	Person* referenceToThePeople[PEOPLE_TEST];
	Person* smallerReferences[SMALL_TEST];

	//Builds thePeople test array
	Person thePeople[PEOPLE_TEST] = {
		{.name = "Meghan Lynn Padilla", .age = 20},
		{.name = "Lucy Stephens", .age = 18},
		{.name = "Shakira", .age = 42},
		{.name = "Bob Bob", .age = 19},
		{.name = "Kamrynn Lynn Jo Hatch", .age = 14},
		{.name = "Brendon Newton", .age = 21},
		{.name = "Peyton Brown", .age = 22},
		{.name = "Zebra Stripe", .age = 112},
		{.name = "Aaron Abram", .age = 0},
		{.name = "Bon Bon", .age = 9},
		{.name = "Todd Coolguy", .age = 67},
		{.name = "Pitbull", .age = 87},
		{.name = "Mr Worldwide", .age = 47},
		{.name = "Luci Stephens", .age = 18},
		{.name = "Mr Worldwide", .age = 47},
		{.name = "Meghan Padilla", .age = 20},
		{.name = "Meghan", .age = 20}
	};
	//Builds thePeople in alphabetical order
	Person thePeopleAlphaSample[PEOPLE_TEST] = {
		{.name = "Aaron Abram", .age = 0},
		{.name = "Aaron Allen", .age = 3},
		{.name = "Bob Bob", .age = 19},
		{.name = "Bon Bon", .age = 9},
		{.name = "Brendon Newton", .age = 21},
		{.name = "Johnny Test", .age = 2},
		{.name = "Kamrynn Lynn Jo Hatch", .age = 14},
		{.name = "Luci Stephens", .age = 18},
		{.name = "Lucy Stephens", .age = 18},
		{.name = "Meghan", .age = 20},
		{.name = "Meghan Lynn Padilla", .age = 20},
		{.name = "Meghan Padilla", .age = 20},
		{.name = "Mr Worldwide", .age = 47},
		{.name = "Mr Worldwide", .age = 47},
		{.name = "Peyton Brown", .age = 22},
		{.name = "Pitbull", .age = 87},
		{.name = "Shakira", .age = 42},
		{.name = "Todd Coolguy", .age = 67},
		{.name = "Zebra Stripe", .age = 112},	
	};
	//Builds small array
	Person smallerArray[SMALL_TEST] = {
		{.name = "Meghan Lynn Padilla", .age = 20},
		{.name = "Lucy Stephens", .age = 18},
		{.name = "Shakira", .age = 42},
		{.name = "Kamrynn Lynn Jo Hatch", .age = 19}
	};
	//Builds small array in alphabetical order
	Person smallAlphaSample[SMALL_TEST] = {
		{.name = "Kamrynn Lynn Jo Hatch", .age = 19},
		{.name = "Lucy Stephens", .age = 18},
		{.name = "Meghan Lynn Padilla", .age = 20},
		{.name = "Shakira", .age = 42}
	};
	//Builds thePeople in numerical order
	Person thePeopleNumSample[PEOPLE_TEST] = {
		{.name = "Aaron Abram", .age = 0},
		{.name = "Johnny Test", .age = 2},
		{.name = "Aaron Allen", .age = 3},
		{.name = "Bon Bon", .age = 9},
		{.name = "Kamrynn Lynn Jo Hatch", .age = 14},
		{.name = "Luci Stephens", .age = 18},
		{.name = "Lucy Stephens", .age = 18},
		{.name = "Bob Bob", .age = 19},
		{.name = "Meghan", .age = 20},
		{.name = "Meghan Padilla", .age = 20},
		{.name = "Meghan Lynn Padilla", .age = 20},
		{.name = "Brendon Newton", .age = 21},
		{.name = "Peyton Brown", .age = 22},
		{.name = "Shakira", .age = 42},
		{.name = "Mr Worldwide", .age = 47},
		{.name = "Mr Worldwide", .age = 47},
		{.name = "Todd Coolguy", .age = 67},
		{.name = "Pitbull", .age = 87},
		{.name = "Zebra Stripe", .age = 112},
	};
	//Builds small array in numerical order
	Person smallNumSample[SMALL_TEST] = {
		{.name = "Lucy Stephens", .age = 18},
		{.name = "Kamrynn Lynn Jo Hatch", .age = 19},
		{.name = "Meghan Lynn Padilla", .age = 20},
		{.name = "Shakira", .age = 42}
	};

	//Inserts two people into istream
	stringstream ss;
	ss << "Aaron Allen, 3" << endl;
	ss << "Johnny Test, 2" << endl;

	//Reads two people from stringstream
	getAPersonFromStream(ss, &thePeople[17]);
	getAPersonFromStream(ss, &thePeople[18]);

	//Tests getAPersonFromStream functionality
	if (thePeople[17].name != "Aaron Allen" || thePeople[17].age != 3) {
		cout << "Error: failed to get person 18 from stream" << endl;
	}
	if (thePeople[18].name != "Johnny Test" || thePeople[18].age != 2) {
		cout << "Error: failed to get person 19 from stream" << endl;
	}

	//Fills pointer array with references to people array
	for (int i = 0; i < PEOPLE_TEST; i++) {
		referenceToThePeople[i] = &thePeople[i];
	}

	//Fills smaller pointer array with smaller array references
	for (int i = 0; i < SMALL_TEST; i++) {
		smallerReferences[i] = &smallerArray[i];
	}

	//Tests if names and ages are pointed to, and that pointers are pointing
	for (int i = 0; i < PEOPLE_TEST; i++) {
		if (referenceToThePeople[i]->name != thePeople[i].name) {
			cout << "Error: Names at index " << i << " do not match" << endl;
		} else if (referenceToThePeople[i]->age != thePeople[i].age) {
			cout << "Error: Ages at index " << i << " do not match" << endl;
		} else if (referenceToThePeople[i] != &thePeople[i]) {
			cout << "Error: Pointer doesn't match reference at " << i << endl;
		}
	}

	//Tests if names and ages in smaller array are pointed to, and that 
	//pointers are pointing
	for (int i = 0; i < SMALL_TEST; i++) {
		if (smallerReferences[i]->name != smallerArray[i].name) {
			cout << "Error: Names at index " << i << " do not match" << endl;
		} else if (smallerReferences[i]->age != smallerArray[i].age) {
			cout << "Error: Ages at index " << i << " do not match" << endl;
		} else if (smallerReferences[i] != &smallerArray[i]) {
			cout << "Error: Pointer doesn't match reference at " << i << endl;
		}
	}

	sortPersonArrayByAge(referenceToThePeople, PEOPLE_TEST);
	sortPersonArrayByAge(smallerReferences, SMALL_TEST);

	//Tests sorted array pointers against thePeople age sorted sample
	for (int i = 0; i < PEOPLE_TEST; i++) {
		if (!areEqualAges(referenceToThePeople, thePeopleNumSample, i)) {
			cout << "Error: thePeople ages failed at " << i << endl;
		}
	}

	//Tests smaller pointers against smaller age sorted sample
	for (int i = 0; i < SMALL_TEST; i++) {
		if (!areEqualAges(smallerReferences, smallNumSample, i)) {
			cout << "Error: small test ages failed at " << i << endl;
		}
	}

	sortPersonArrayByName(referenceToThePeople, PEOPLE_TEST);
	sortPersonArrayByName(smallerReferences, SMALL_TEST);

	//Tests sorted pointers against thePeople name sorted sample
	for (int i = 0; i < PEOPLE_TEST; i++) {
		if (!areEqualNames(referenceToThePeople, thePeopleAlphaSample, i)) {
			cout << "Error: thePeople names failed at " << i << endl;
		}
	}

	//Tests smaller arrays sorted pointers against age sorted sample
	for (int i = 0; i < SMALL_TEST; i++) {
		if (!areEqualNames(smallerReferences, smallAlphaSample, i)) {
			cout << "Error: small test names failed at " << i << endl;
		}
	}

	//Tests findAPerson for two thePeople people
	string key = "Shakira";
	if (&thePeople[2] != findAPerson(referenceToThePeople, PEOPLE_TEST, key)) {
		cout << "Error: thePeople person doesn't match - " << key << endl;
	}
	key = "Kamrynn Lynn Jo Hatch";
	if (&thePeople[4] != findAPerson(referenceToThePeople, PEOPLE_TEST, key)) {
		cout << "Error: thePeople person doesn't match - " << key << endl;
	}

	//Tests findAPerson for two small array people
	key = "Lucy Stephens";
	if (&smallerArray[1] != findAPerson(smallerReferences, SMALL_TEST, key)) {
		cout << "Error: smaller array person doesn't match - " << key << endl;
	}
	key = "Meghan Lynn Padilla";
	if (&smallerArray[0] != findAPerson(smallerReferences, SMALL_TEST, key)) {
		cout << "Error: smaller array person doesn't match - " << key << endl;
	}

	//Tests displayAPerson on both arrays
	cout << "displayAPerson at index 0: ";
	displayAPerson(cout, referenceToThePeople[0]);
	cout << "Expected: Aaron Abram 0" << endl << endl;
	cout << "displayAPerson at index 16: ";
	displayAPerson(cout, referenceToThePeople[16]);
	cout << "Expected: Shakira 42" << endl << endl;

	cout << "displayAPerson in small array at index 1: ";
	displayAPerson(cout, smallerReferences[1]);
	cout << "Expected: Lucy Stephens 18" << endl << endl;
	cout << "displayAPerson in small array at index 2: ";
	displayAPerson(cout, smallerReferences[2]);
	cout << "Expected: Meghan Lynn Padilla 20" << endl << endl;

	cout << endl << "---Test Complete---" << endl;

	return 0;
}

/** 
 * compareNames
 * 
 * This function compares the name values of two arrays
 * 
 * Parameters: 
 *     A reference array
 * 	   An array
 * 
 * Output: 
 *      return: bool 
 *      true if equal, false if not equal 
 */

bool areEqualNames(Person** referenceArray, Person* array, int index) {
	return referenceArray[index]->name == array[index].name;
}

/** 
 * compareAges
 * 
 * This function compares the age values of two arrays
 * 
 * Parameters: 
 *     A reference array
 * 	   An array
 * 
 * Output: 
 *      return: bool 
 *      true if equal, false if not equal 
 */

bool areEqualAges(Person** referenceArray, Person* array, int index) {
	return referenceArray[index]->age == array[index].age;
}
