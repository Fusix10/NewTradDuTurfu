#include "Operator.h"


Operator::Operator()
{
	Alphabbet = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	Alphabbettrad = Alphabbet;
}

Operator::~Operator()
{
}

std::string Operator::TradtoSigne(std::string mot)
{
	for (int I = 0; I < mot.size(); I++)
	{
		if (mot.size() % 2) {
			Alphabbettrad.insert(Alphabbettrad.end(), Alphabbettrad[0] + I);
			Alphabbettrad.erase(Alphabbettrad.begin());
		}
		else {
			Alphabbettrad.insert(Alphabbettrad.begin(), Alphabbettrad[(Alphabbettrad.size() - 1) - I]);
			Alphabbettrad.erase(Alphabbettrad.end() - 1);
		}
	}
	std::string newword = "";
	for (int I = 0; I < mot.size(); I++)
	{
		int get = findInteger(mot[I],true);
		newword += Alphabbettrad[get];
	}
	Alphabbettrad = Alphabbet;
	return newword;
}

std::string Operator::TradtoFR(std::string signe)
{
	for (int I = 0; I < signe.size(); I++)
	{
		if (signe.size() % 2) {
			Alphabbettrad.insert(Alphabbettrad.end(), Alphabbettrad[0] + I);
			Alphabbettrad.erase(Alphabbettrad.begin());
		}
		else {
			Alphabbettrad.insert(Alphabbettrad.begin(), Alphabbettrad[(Alphabbettrad.size() - 1) - I]);
			Alphabbettrad.erase(Alphabbettrad.end() - 1);
		}
	}
	std::string newword = "";
	for (int I = 0; I < signe.size(); I++)
	{
		int get = findInteger(signe[I], false);
		newword += Alphabbet[get];
	}
	Alphabbettrad = Alphabbet;
	return newword;
}

int Operator::findInteger(char letter, bool trad)
{
	if (trad == true) 
	{
		int index = -1;
		for (int i = 0; i < Alphabbet.size(); i++) {
			if (Alphabbet[i] == letter) {
				index = i;
				break;
			}
		}

		if (index != -1) {
			return index;
		}
		else {
			std::cout << "Lettre non trouvee !" << std::endl;
			return index;
		}
	}
	else {
		int index = -1;
		for (int i = 0; i < Alphabbettrad.size(); i++) {
			if (Alphabbettrad[i] == letter) {
				index = i;
				break;
			}
		}

		if (index != -1) {
			return index;
		}
		else {
			std::cout << "Lettre non trouvee !" << std::endl;
			return index;
		}
	}
	
}