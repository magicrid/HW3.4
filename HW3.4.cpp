#include <iostream>

int main() 
{
    
    setlocale(LC_ALL, "RU");
    
    int num1, num2;

    std::cout << "Введите целое число: ";
    std::cin >> num1;

    if (num1 > 101 || num1 < -101) 
    {
        std::cout << "Ошибка! Одно из чисел вне диапазона!" << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << "Введите целое число: ";
    std::cin >> num2;

    if (num2 > 101 || num2 < -101) 
    {
        std::cout << "Ошибка! Одно из чисел вне диапазона!" << std::endl;
        return EXIT_FAILURE;
    }

  
    if (num1 < num2) 
    {
        std::cout << num1 << " меньше чем " << num2 << std::endl;
    }
    else if (num1 > num2) 
    {
        std::cout << num1 << " больше чем " << num2 << std::endl;
    }
    else 
    {
        std::cout << num1 << " равно " << num2 << std::endl;
    }

    return EXIT_SUCCESS;
}