#include <iostream>

long long fibonacci(long long n, long long *F)
{
    if (n == 0)
        return F[0] = 0;
    else if (n == 1)
        return F[1] = 1;
    else
        return F[n] = fibonacci(n - 2, F) + fibonacci(n - 1, F);
}

int main()
{
    int n;
    std::cin >> n;
    long long *F = new long long[n];
    std::cout << fibonacci(n, F) << std::endl;
}