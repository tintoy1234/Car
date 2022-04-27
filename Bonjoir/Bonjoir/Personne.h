#pragma once
#include <string>
class Personne
{
private:
	std::string mName;
	std::string mBday;
	std::string mGender;
	std::string mDescription;
	int mMoney;

public:
	std::string Thename;
	Personne();
	Personne(std::string name, std::string bday, std::string gender, std::string desc, int money);

	~Personne();

	std::string GetName();
	std::string GetBday();
	std::string GetGender();
	std::string GetDescription();
	int GetMoney();

	void DisplaySumup();
	void DisplayJohn();
};
