#include <iostream>





void main()
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