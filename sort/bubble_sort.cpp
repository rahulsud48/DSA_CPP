#include<iostream>

void show_array(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}

void bubble(int* arr, int n)
{
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < j; i++)
        {
            if (arr[i] > arr[i+1])
            {
                int x;
                x = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = x;
            }
            
        }
        show_array(arr, n);
    }

}

int main()
{
    int arr[] = {9,8,7,6,5,4,3,2,1,0};
    int n = 10;
    show_array(arr, n);
    bubble(arr, n);
}