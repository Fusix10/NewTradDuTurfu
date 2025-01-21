#pragma once
#include <iostream>
#include <string>
#include <vector>
class Operator
{
private:
	std::vector<char> Alphabbet;
	std::vector<char> Alphabbettrad;
	int findInteger(char letter, bool trad);
	
public:
	Operator();
	~Operator();
	std::string TradtoSigne(std::string mot);
	std::string TradtoFR(std::string signe);
};

