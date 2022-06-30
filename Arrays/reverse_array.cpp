#include<iostream>

void reverse(int* arr, int* arr_rev, int n)
{
    // this takes time complexity O(n) and Aux space O(n)

    for (int i = 0; i < n; i++)
    {
        arr_rev[n-1-i] = arr[i];
    }
}

void reverse_low_aux_space(int* arr, int n)
{
    // this takes time complexity O(n) and Aux space O(1)
    int low = 0;
    int high = n-1;

    while(low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

void show_array(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}

int main()
{
    int arr[] = {11,22,33,44,55,66,77,88,99};
    int arr_rev[9];
    reverse(arr, arr_rev, 9);
    std::cout<<"The current array is: ";show_array(arr, 9);
    std::cout<<"The reversed array is: ";show_array(arr_rev, 9);
    reverse_low_aux_space(arr, 9);
    std::cout<<"The reversed array with better method is: ";show_array(arr, 9);

}