#pragma once
#include <string>
class Voiture
{
private:
	std::string mName;
	std::string mLiscence;
	int mMileage;
	int mValue;

public:
	std::string Thename;
	Voiture();
	Voiture(std::string name, std::string liscence, int mileage, int value);

	~Voiture();

	std::string GetName();
	std::string GetLiscence();
	int GetMileage();
	int GetValue();

	void DisplayVroum();
	void DisplayAchat();
	void DisplayJohnVroom();
};

