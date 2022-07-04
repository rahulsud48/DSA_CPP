#include<iostream>

void show_array(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}

void selection(int* arr, int n)
{
    
}

int main()
{
    int arr[] = {9,8,7,6,5,4,3,2,1,0};
    int n = 10;
    show_array(arr, n);
    selection(arr, n);
}