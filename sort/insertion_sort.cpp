#include<iostream>

void show_array(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}

void isort(int* arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while(arr[j] < arr[j-1])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
        show_array(arr, n);
    }
}

int main()
{
    int arr[] = {20,5,40,60,10,30, 0};
    int n= 6;
    int cap = 7;
    int x = 45;
    int pos = 3;
    show_array(arr, n);

    isort(arr, n);
    show_array(arr, n);

}