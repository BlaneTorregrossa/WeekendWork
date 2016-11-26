#pragma once 


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
	//Operator overloading always has to be a booly to work.
	bool operator== (Cat rhs) 
	{
		// Have to make the overload work here.
		if (mName == rhs.mName && mAge == rhs.mAge)
		{
			return true;
		}
		return false;
	}

};