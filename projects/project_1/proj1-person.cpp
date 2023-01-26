/**
 * file: proj1-testmain.cpp
 * author: Brendon Newton
 * course: CSI 1440 
 * assignment: Project 1
 * due date: 1/23/2023
 * 
 * date modified: 1/21/2023
 *     -findAPerson function bug fixed
 * 
 * date modified: 1/19/2023
 *      - file created
 *       - getAPersonFromStream, sortPersonArrayByAge,
 *         and sortPersonArrayByName definitions complete 
 * 
 *  Indirect Sorting - Person Implementation 
 */
#include "proj1-person.hpp"

/** 
 * getAPersonFromStream
 * 
 * This function gets the name and age of a person object from
 * a user through a stream
 * 
 * Parameters: 
 *     stream - a reference to an istream
 * 	   person - a pointer to a person in person array
 * 
 * Output: 
 *      return: ifstream 
 *      person name and age are set 
 */

istream& getAPersonFromStream(istream& stream, Person* person) {
	//Gets the name and skips the comma
    getline(stream, person->name, ',');
	stream.ignore();
	
	//Gets age
	stream >> person->age;
	stream.ignore();
	
	return stream;
}

/** 
 * sortPersonArrayByAge
 * 
 * This function sorts the person reference array by youngest to oldest
 * 
 * Parameters: 
 *     people - pointer to the reference array
 * 	   numPersons - int amount of people in the people array
 * 
 * Output: 
 * 		return: none
 *      reference array sorted from youngest to oldest
 */

void sortPersonArrayByAge(Person** people, int numPersons) {
	Person* temp;
	int smallestIndex;
	
	//Swaps pointer at i with lowest value until sorted
	for (int i = 0; i < numPersons - 1; i++) {
		smallestIndex = i;
		for (int j = i + 1; j < numPersons; j++) {
			if (people[j]->age < people[smallestIndex]->age) {
				smallestIndex = j;
			}
		}
		temp = people[i];
		people[i] = people[smallestIndex];
		people[smallestIndex] = temp;
	}
}

/** 
 * sortPersonArrayByName
 * 
 * This function sorts the person reference array by names alphabetically
 * 
 * Parameters: 
 *     people - pointer to the reference array
 * 	   numPersons - int amount of people in the people array
 * 
 * Output: 
 * 		return: none
 *      reference array sorted by name alphabetically
 */

void sortPersonArrayByName(Person** person, int numPersons) {
	//Swaps pointers until pointer at j is
	//greater than the next pointer value
	Person* temp;
	for (int i = 0; i < numPersons - 1; i++) {
		for (int j = 0; j < numPersons - i - 1; j++) {
			if (person[j]->name > person[j + 1]->name) {
				swap(person[j], person[j + 1]);
			}
		}
	}
}

/** 
 * findAPerson
 * 
 * This function finds a person using a linear search
 * 
 * Parameters: 
 *     people - pointer to the reference array
 * 	   numPersons - int amount of people in the people array
 *     key - string containing input name from user
 * 
 * Output: 
 * 		return: *person
 * 		if the name isn't found, null is returned
 *      
 */

Person* findAPerson(Person** people, int numPersons, string key) {
	Person* person;
	//In the case no value is found, null is returned
	person = nullptr;
	//Checks all names an sets person to matching pointer
	for (int i = 0; i < numPersons; i++) {
		if (people[i]->name == key) {
			person = people[i];
			break;
		}
	}
	return person;
}

/** 
 * displayAPerson
 * 
 * This function displays a persons name and age
 * 
 * Parameters: 
 *     stream - reference to ostream
 * 	   person - a person* to display from reference array
 * 
 * Output: 
 * 		return: none
 * 		persons name and age are output to stream
 *      
 */

void displayAPerson(ostream& stream, const Person* person) {
	if (person != nullptr) {
		stream << person->name << " " << person->age << endl;
	}
}
