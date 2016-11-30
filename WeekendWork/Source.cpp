#include <iostream>
#include "Header.h"








//Problem 1:
//Reverse a string in place.Cannot use a temporary array.
void stringReverse()
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

//Problem 3: Using the class created in problem 2 create an array of cats and sort them by age from youngest to oldest.
void catAgeSorting()
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


// Problem 6: Write a function that takes in an array of integers and returns the largest value stored in the array.
int LargestValue()
{
	int numArray[5] = { 8, 2, 12, 55, 7 }; // an array of type int holding 5 values 
	int highestnum = 0; // a variable of type int with a value of 0
	for (int i = 0; i < 5; i++)
	{
		if (highestnum < numArray[i])
		{
			highestnum = numArray[i]; // assigns highestnum value from array if it's own value is less than the one given from the loop
		}
	}
	return highestnum;
}

// Problem 7: For all numbers from 0 to 100, if a number is a multiple of 3 print fizz, if number is a multiple of 5 print buzz, if a multiple of 3 and 5 print fizzbuzz, otherwise print the number. 
void FizzBuzz()
{
	for (int i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0) // if variable i of type int is divisible by values 3 or 5 print fizzbuzz
		{
			std::cout << i << " fizzbuzz" << std::endl;
		}
		else if (i % 3 == 0)// if variable i of type int is divisible by values 3 print fizz
		{
			std::cout << i << " fizz" << std::endl;
		}
		else if (i % 5 == 0) // if variable i of type int is divisible by values 5 print buzz
		{
			std::cout << i << " buzz" << std::endl;
		}
		else // prints value given if not divisible by value 3 or 5
		{
			std::cout << i << std::endl;
		}
	}
}

// Problem 8: 8) Sort and array of character into alphabetical order using these characters (q, w, e, r, t, y, u, i, o, p, a, s, d, f, g, h, j, k, l, z, x, c, v, b, n, m)
void ABCSorting()
{
	char letters[] = { 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'z', 'x', 'c', 'v', 'b', 'n', 'm' };
	int letterCount = 'a';
	for (int i = 0; i < 26; i++)
	{
		if (letters[i] != letterCount)
		{
			letters[i] = letterCount;
			letterCount++;
		}
	}
}

//Problem 5: Write a function that takes two parameters a pointer to an array and the number of elements then populate the array with all even numbers from 0 - 20, then prints out the values in the array
//Could not figure out
void AllEven(int * evenNums[], int size)
{
	for (int i = 0; i < 21; i++)
	{
		if (i % 2 == 0)
		{
			
		}
	}

}
void main()
{
	stringReverse();
	catAgeSorting();
	LargestValue();
	FizzBuzz();
	ABCSorting();
	AllEven(0, 11);
}