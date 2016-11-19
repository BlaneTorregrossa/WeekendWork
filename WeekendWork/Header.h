#pragma once // Should allow this to connect with the source.cpp


// [Not sure about the order for this...]
class Cat // Declaring a class of Cat. Evreything in the class is public.
{
public:
	char * mName; // Variable mName of type char with a pointer.
	int mAge; // Variable mAge of type int.
	Cat(char * n, int a) // Constructor containing a character pointer and an interger.
	{
		n = mName; // [Not sure what to do about this.]
		a = mAge; // [Not sure what to do about this.]
	}
	Cat() // Constructer for Cat with nothing else.
	{
		mAge = 1; // Assigns varible mAge of type int to equal 1.
		mName = "DogName"; // Assigns variable mName of type character pointer to equal to DogName.
	}
	void Rename(char *) // Function Rename of type void that contains a character pointer.
	{
		char *mNewName; // Variable mNewName of type character pointer.
		mNewName = "NewCatName"; // Assigns the variable of mNewName to be NewCatName.
	}
};