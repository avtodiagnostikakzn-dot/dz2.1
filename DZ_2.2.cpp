#include <iostream>
#include <string>

int main()
{
    std::string line;
    std::cout << "Введите строку: " << std::endl;
    std::getline(std::cin, line);
    std::cout << "Вы ввели: " << line << std::endl;
    
    return EXIT_SUCCESS;
}
