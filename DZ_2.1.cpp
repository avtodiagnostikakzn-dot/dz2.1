
#include <iostream>
#include <string>  

int main()
{
    std::string word;
    std::cout << "Введите слово: " << "\n";
    std::cin >> word;
    std::cout << "Вы ввели: " << word << std::endl << "\n";

    return EXIT_SUCCESS;
}