#include <iostream>
#include <string>  

int main()
{
    std::string word;
    std::cout << "Введите слово: " << "\n";
    std::cin >> word;
    std::cout << "Вы ввели: " << "\n" << word << std::endl;

    return EXIT_SUCCESS;
}