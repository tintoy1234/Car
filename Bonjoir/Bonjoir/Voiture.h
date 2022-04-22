#pragma once
#include <string>
class Voiture
{
private:
	std::string mName;
	std::string mLiscence;
	std::string mMileage;
	int mValue;

public:
	std::string Thename;
	Voiture();
	Voiture(std::string name, std::string liscence, std::string mileage, int value);

	~Voiture();

	std::string GetName();
	std::string GetLiscence();
	std::string GetMileage();
	int GetValue();

	void DisplayVroum();
};

