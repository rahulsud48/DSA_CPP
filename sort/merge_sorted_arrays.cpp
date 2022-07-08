#include<iostream>

void show_array(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}

void merge_sorted_arr(int* arr1, int n1, int* arr2, int n2)
{
    int j = 0;
    for (int i = 0; i < n1; i++)
    {
        
        while (arr1[i] > arr2[j] && j < n2)
        {
            std::cout<<arr2[j] << " ";
            j++;
        }
        std::cout<<arr1[i] << " ";
    }
}

int main()
{
    int arr1[] = {10,15,20};
    int n1 = 3;
    int arr2[] = {5,6,6,15};
    int n2 = 4;
    merge_sorted_arr(arr1, n1, arr2, n2);
    std::cout<<"\n";
}