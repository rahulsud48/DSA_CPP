#include<iostream>

void show_array(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}


int zero_to_end(int* arr, int n)
{                                   // time complexity O(n)
                                    // Aux space complexity O(1)
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[res] = arr[i];
            res++;
        }
    }

    for (int j = res+1; j < n; j++)
    {
        arr[j] = 0;
    }

    return n;
}

int main()
{
    int arr[] = {8,5,5,5,0,10,10,0,0,20};
    int n = 10;
    std::cout<<"The current array of size: " << n <<" is: ";show_array(arr, n);
    n = zero_to_end(arr, n);
    std::cout<<"The array of size: " << n <<" without duplicates is: ";show_array(arr, n);
}