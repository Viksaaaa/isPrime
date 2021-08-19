#include <iostream>

bool is_Prime(int digit)
{
    if(digit == 2)
    {
        return true;
    }

    if(digit == 3)
    {
        return true;
    }

    if(digit == 5)
    {
        return true;
    }

    if(digit == 7)
    {
        return true;
    }
    
    return false;
}

int main()
{
    std::cout << "Enter a digit: ";
    
    int digit;
    std::cin >> digit;
    
    if(is_Prime(digit))
    {
        std::cout << "The digit is prime" << std::endl;
    }
    else
    {
        std::cout << "The digit is not prime" << std::endl;
    }
    
    return 0;
}

