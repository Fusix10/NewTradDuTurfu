#include <iostream>
#include "Operator.h"

int main()
{
    Operator test;
    int rep;
    std::string totrad = "";
    while (1) {
        std::cout << "Hello dans trad signe, pour passer des signe en FR et l'inverse\n";
        std::cout << "Que veux tu faire ? TradtoFR = 1, TradtoSigne = 2\n";
        std::cout << "votre choix: ";
        std::cin >> rep;
        std::cout << "\n";
        std::cout << "tres bien veuillez mettre votre mots en minuscule sans espace (pas de phrase).\nvotre mots: ";
        std::cin >> totrad;
        std::cout << "\n";
        if (rep == 1) 
        {
            std::cout <<"Traduction: "<< test.TradtoFR(totrad) << "\n\n";
        }
        else if (rep == 2) 
        {
            std::cout << "Traduit: " << test.TradtoSigne(totrad) << "\n\n";
        }
    }
}
