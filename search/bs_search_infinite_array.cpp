#include<iostream>

int bsSearch(int* arr, int n, int x)
{
    int i = 0;
    if (arr[i] == x)
    {
        return 0;
    }
    i++;

    while (arr[i]<x)
    {
        i *= 2;
    }

    int high = i;
    int low = i/2;
    int mid;
    while (low <= high)
    {
        mid = (low+high)/2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if ( arr[mid] > x)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1,10,30,50,50,60,80,100,200,5000,5000,8000,9000,9000,10000};
    int n = 15;
    int f = 10000;
    int idx = bsSearch(arr, n, f);
    std::cout<<"The index is: " << idx << "\n";
}