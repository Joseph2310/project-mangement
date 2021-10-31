
#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "welcome to add 2 numbers application!\n";
    double firstNumber , secondNumber ;

    std::cout << "please enter your first Number\n ";
    std::cin >> firstNumber;

    std::cout << "please enter your second number\n";
    std::cin >> secondNumber;

    double result = 0;
    result = firstNumber + secondNumber;

    std::cout << "the sum of numbers is " << std::unsef(<< std::fixed)  << result;
   

}

