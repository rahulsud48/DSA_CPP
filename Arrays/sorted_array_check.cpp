#include<iostream>

bool check_sort(int* arr, int n)
{
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i+1]<arr[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {11,22,33,44,44,66,77,88,99};

    std::cout<<"Is array sorted? Answer: "<< check_sort(arr, 9)<<"\n";
}