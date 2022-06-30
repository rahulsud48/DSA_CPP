#include<iostream>

void show_array(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}

int left_rotate_array_one(int* arr, int n)      // time complexity O(n)
{                                           // Aux space O(1)
    int temp = arr[0];
    for (int i = 0; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
    return n;
}

int left_rotate_array_d(int* arr, int n)      // time complexity O(n)
{                                           // Aux space O(1)
    int temp = arr[0];
    for (int i = 0; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
    return n;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;
    std::cout<<"The current array of size: " << n <<" is: ";show_array(arr, n);
    n = left_rotate_array_one(arr, n);
    std::cout<<"The array of size: " << n <<" without duplicates is: ";show_array(arr, n);
}