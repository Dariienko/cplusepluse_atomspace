#include <iostream>

int main() {
    int value = 15;
    int a[] = { 1, 3, 4, 12, 15, 16 };
    int counter = 0;
    int low = 0;
    int mid = 0;
    int high = sizeof(a) / sizeof(int) - 1;
    while (low != high && a[mid] != value)
    {
        mid = (low + high) / 2;
        if (a[mid] < value) 
        {
            low = mid;
        } 
        else high = mid;
        counter++;
    }
    std::cout << "value " << a[mid] << " found "<< std::endl <<"index = "<< mid << std::endl <<"steps done = "<< counter;
}