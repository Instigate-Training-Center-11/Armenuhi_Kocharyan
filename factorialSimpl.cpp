#include <iostream>

// function to find factorial of given number using recursion
unsigned int factorialRec(unsigned int n)
{
    if (n == 0) {
        return 1;
    }
    return n * factorialRec(n - 1);
}

// function to find factorial of given number without recursion
unsigned int factorialWRec(unsigned int n)
{
    unsigned result = 1;
    for (double i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main()
{
    unsigned int num;
    std::cout << "Enter the positive number: ";
    std::cin >> num;
    std::cout << "Factorial with recursion of "
              << num << " is " << factorialRec(num) << std::endl;
    std::cout << "Factorial without recursion of "
              << num << " is " << factorialWRec(num) << std::endl;
    return 0;
}
