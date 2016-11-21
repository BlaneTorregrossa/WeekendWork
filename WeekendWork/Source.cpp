#include <iostream>
#include "Header.h"

/* Problem 1:
Reverse a string in place. Cannot use a temporary array.

Problem 2:
Implement a UML Diagram

Problem 3: Using the class created in problem 2 create an array of cats and sort them by age from youngest to oldest.
Do not modify class

Problem 4: Using the class created in problem 2 add a function that overloads the == operator that compares if two cats are identical.

*/


void problem1()
{
	char name[] = "Hello"; // Sets up the string and what is in the string
	int size = 5; // Size of the current string
	for (int i = 0; i < size / 2; i++) // for loop that incraments i when it's value is less than half of size.
	{
		int temp = name[i]; // Assigns temp to the index i in array name
		name[i] = name[(size - 1) - i]; // Assigns the index of i to equal to position opposite of it
		name[(size - i) - 1] = temp; // Assigns the position opposite of i to equal what the temp value was assigned
	}
}


void problem3()
{
	Cat catArray[] = { Cat("Virgil", 2), Cat("Bob",1), Cat("Meowth", 20), Cat("Garfield", 4) }; // Sets the array of cats giving each "Cat" an asinged name and age.
	for (int i = 0; i < 4; i++) // A for loop that is the size of the array
	{
		for (int j = 0; j < 4; j++) // A nested for loop that is the size of the array
		{
			if (catArray[i].mAge < catArray[j].mAge) // if catArray for loop i is of an age greater catArray for loop j
			{

				Cat temp = catArray[i];
				catArray[i] = catArray[j];
				catArray[j] = temp;

			}
		}
	}

}


void main()
{
	problem1();
	problem3();
}