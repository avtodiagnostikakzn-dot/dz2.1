#include <iostream>
#include <string>  

int main()
{
    int integer{};
    std::cout << "Введите число: " << std::endl;
    std::cin >> integer;
    std::cout << "Вы ввели: " << integer << std::endl;

    return EXIT_SUCCESS;
}
