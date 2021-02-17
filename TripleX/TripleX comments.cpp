#include <iostream> //Inclui funcionalidades pré programadas no seu programa.

int main() //Código principal que inicia o programa e suas funcões.
{
    //Expression Statements: Onde o programa desenvolve suas funções.
    std::cout << "You are a secret agent breaking into a secure server room";
    std::cout << std::endl;
    std::cout << "You need to enter the correct codes to continue...";
    std::cout << std::endl;

    //Declaration Statements: Dados que o programa precisa para funcionar.
    int a = 4;
    int b = 3;
    int c = 2;

    a = 7;

    const int sum = a + b + c;
    const int product = a * b * c;

    //Expression Statements: Onde o programa desenvolve suas funções.
    std::cout << sum << std::endl; //std::cout << a + b + c;
    std::cout << product;
    std::cout << std::endl;

    /*
    This is
    a multi line
    comment
    */

    return 0; //Código que encerra o programa.
}