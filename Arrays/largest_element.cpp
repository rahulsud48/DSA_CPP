#include<iostream>

int largest_element(int* arr, int n)
{
    int largest = arr[0];
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
            idx = i;
        }
    }

    return idx;
}

int second_largest_element(int* arr, int n)
{
    int largest = arr[0];
    int second_largest = arr[0];
    int idx_1 = 0;
    int idx_2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
            idx_1 = i;
        }
    }

    for (int j = 0; j < n; j++)
    {
        if (j == idx_1) 
            {}
        else 
        {
            if (second_largest < arr[j])
            {
                second_largest = arr[j];
                idx_2 = j;
            }
        }

    }

    return idx_2;
}

int main()
{
    int arr[] = {10, 5, 20, 200, 50, 90, 2, 100, 6, 7};
    std::cout<<"The largest value is: "<<arr[largest_element(arr, 10)]<<"\n";
    std::cout<<"The second largest value is: "<<arr[second_largest_element(arr, 10)]<<"\n";
}