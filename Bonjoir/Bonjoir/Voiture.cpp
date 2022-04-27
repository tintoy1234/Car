#include "Voiture.h"
#include "Color.h"
#include <iostream>
using namespace std;

Voiture::Voiture()
{
	mName = "Default";
	mLiscence = "Default";
	Thename = "Default";
	mMileage = 1;
	mValue = 1;
}
Voiture::Voiture(string name, string liscence, int mileage, int value) 
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
int Voiture::GetMileage()
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
	cout << "it is (put color) " << " with liscence plate " << mLiscence << endl;
	cout << "With a mileage of " << mMileage << " km, it has a value of " << mValue << "$." <<endl;
	cout << "-------------------------------------------------------------------------\n";
}
void Voiture::DisplayAchat() 
{
	cout << "Alex sells " << Thename << " to John." << endl;
	cout << "Alex earned " << mValue << "$, they now have 12683$." << endl;
	cout << "John spent " << mValue << "$, they now have 18076$." << endl;
	cout << "-------------------------------------------------------------------------\n";
}
void Voiture::DisplayJohnVroom() 
{
	cout << " and a " << Thename << mLiscence << ".\n";
}
