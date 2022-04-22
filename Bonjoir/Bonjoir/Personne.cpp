#include "Personne.h"

#include <iostream>
using namespace std;


Personne::Personne()
{
	mName = "Default";
	mDescription = "Default";
	Thename = "Default";
	mGender = "Default";
	mBday = "Default";
	mMoney = 1;
}
Personne::Personne(string name, string bday, string gender, string desc, int money)
{
	mName = name;
	mDescription = desc;
	mGender = gender;
	mBday = bday;
	mMoney = money;
	Thename = mName;
}
Personne::~Personne()
{
	//Empty until we have complex members
}
string Personne::GetName()
{
	return mName;
}
string Personne::GetBday()
{
	return mBday;
}
string Personne::GetGender()
{
	return mGender;
}
string Personne::GetDescription()
{
	return mDescription;
}
int Personne::GetMoney()
{
	return mMoney;
}
void Personne::DisplaySumup() 
{
	cout << "The person " << Thename << " was created." << endl;
	cout << Thename << " was born on " << mBday << " and is a " << mGender << "." << endl;
	cout << Thename << " has " << mMoney << "$ and " << mDescription << ".\n";
}