#pragma once 

//Problem 2: Implement a UML Diagram
class Cat // Declaring a class of Cat. Evreything in the class is public.
{
public:
	char * mName; // Variable mName of type char with a pointer.
	int mAge; // Variable mAge of type int.
	Cat(char * n, int a) // Constructor containing a character pointer and an interger.
	{

		mName = n;
		mAge = a;

	}
	Cat() {} // Constructer for Cat.
	void Rename(char * newname) // Function Rename of type void that contains a character pointer.
	{
		mName = newname; 
	}
	//Problem 4: Using the class created in problem 2 add a function that overloads the == operator that compares if two cats are identical.
	//Operator overloading always has to be a booly to work.
	bool operator== (Cat rhs) 
	{
		if (mName == rhs.mName && mAge == rhs.mAge)
		{
			return true;
		}
		return false;
	}

};