#include <iostream>
#include <string>
#include <math.h>

int main(){
    char signe;
    int a;
    int b;


    std::cout << "Entrez le signe de votre opération" << std::endl;
    std::cin >> signe;

    while (signe =! "+" || "-" || "*" || "/" ){
        std::cout << "Entrez un opérateur valide" << std::endl;
        std::cin >> signe;
    }
    switch(signe){
        case '+':
        std::cout << "Entrez un chiffre pour a" << std::endl;
        std::cin >> a;
        std::cout << "Entrez un chiffre pour b" << std::endl;
        std::cin >> b;
        std::cout << "Le résultat de votre addition est : " << a+b << std::endl;
        break;

        case '-':
        std::cout << "Entrez un chiffre pour a" << std::endl;
        std::cin >> a;
        std::cout << "Entrez un chiffre pour b" << std::endl;
        std::cin >> b;
        std::cout << "Le résultat de votre soustraction est : " << a-b << std::endl;
        break;

        case '*' :
        std::cout << "Entrez un chiffre pour a" << std::endl;
        std::cin >> a;
        std::cout << "Entrez un chiffre pour b" << std::endl;
        std::cin >> b;
        std::cout << "Le résultat de votre multiplication est : " << a*b << std::endl;
        break;

        case '/' :
        std::cout << "Entrez un chiffre pour a" << std::endl;
        std::cin >> a;
        std::cout << "Entrez un chiffre pour b" << std::endl;
        std::cin >> b;
        std::cout << "Le résultat de votre division est : " << a/b << std::endl;
        break;
    }

    system("pause");
    }