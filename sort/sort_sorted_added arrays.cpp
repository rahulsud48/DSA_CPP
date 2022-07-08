#include<iostream>

void show_array(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}

void sort(int* arr, int n, int low, int mid, int high)
{
    int j = mid + 1;
    for (int i = 0; i < mid+1; i++)
    {
        while(arr[i] > arr[j])
        {
            std::cout<<arr[j] << " ";
            j++;
        }
        std::cout<<arr[i]<<" ";
        // not working
    }
}

int main()
{
    int arr[] = {10,15,20,11,30, 40};
    int n = 6;
    sort(arr, n, 0, 2, 4);
    std::cout<<"\n";

}