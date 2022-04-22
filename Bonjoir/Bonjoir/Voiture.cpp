#include "Voiture.h"
#include "Color.h"
#include <iostream>
using namespace std;

Voiture::Voiture()
{
	mName = "Default";
	mLiscence = "Default";
	Thename = "Default";
	mMileage = "Default";
	mValue = 1;
}
Voiture::Voiture(string name, string liscence, string mileage, int value) 
{
	mName = name;
	mLiscence = liscence;
	mMileage = mileage;
	mValue = value;
	Thename = mName;
}
Voiture::~Voiture()
{
	//Empty until we have complex members
}
string Voiture::GetName()
{
	return mName;
}
string Voiture::GetLiscence()
{
	return mLiscence;
}
string Voiture::GetMileage()
{
	return mMileage;
}
int Voiture::GetValue()
{
	return mValue;
}
void Voiture::DisplayVroum() 
{
	cout << "The car " << Thename << " was created." << endl;
	cout << "it is (put color)" << " with liscence plate" << mLiscence << endl;
	cout << "With a mileage of " << mMileage << " km, it has a value of" << mValue << ".\n";
}
