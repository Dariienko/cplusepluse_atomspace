#include <iostream>

int main()
{
    int value = 2;
    int a[] = {-1, 3, 4, 7, 10, 11, 12, 15, 16, 29};
    int counter = 0, left = 0, mid = 0;
    int right = sizeof(a) / sizeof(int) - 1;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (a[mid] == value)
        {
            std::cout << "value = " << a[mid] << " found" << std::endl << "index = " << mid << std::endl << "steps done = " << counter;
            return 0;
        }
        else if (a[mid] < value)
        {
            left = mid + 1;
        }
        else
            right = mid - 1;
        counter++;
    }
    std::cout << "value not found" << std::endl << "steps done = " << counter;
}