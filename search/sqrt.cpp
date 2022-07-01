#include<iostream>
#include<chrono>
#include<thread>


int sqRootFloor(int x)
{
    int high = x;
    int low = 1;
    int mid = (high+low)/2;
    while (low <= high)
    {
        if (mid*mid == x)
        {
            return mid;
        }
        else if (mid*mid > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid+1;
        }
        mid = (high+low)/2;
    }
    return mid;
}

int main()
{
    int x = 63;
    int srqt_n = sqRootFloor(x);
    std::cout << "The SQRT of " << x << " is: " << srqt_n << "\n";
}