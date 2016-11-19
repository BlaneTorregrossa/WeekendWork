#pragma once // Should allow this to connect with the source.cpp


class Cat // Declaring a class of Cat. Evreything in the class is public.
{
public:
	char * mName; // Variable mName of type char with a pointer.
	int mAge; // Variable mAge of type int.
	Cat(char * n, int a) // Constructor containing a character pointer and an interger.
	{
		n = mName; 
		a = mAge; 
	}
	Cat() {} // Constructer for Cat.
	void Rename(char * newname) // Function Rename of type void that contains a character pointer.
	{
		mName = newname; 
	}
};