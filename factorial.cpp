#include <iostream>

long long factorial(long long n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    std::cout << factorial(6) << std::endl;
}