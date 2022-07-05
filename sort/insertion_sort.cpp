#include<iostream>

void show_array(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}

int array_insert(int* arr, int n, int cap, int pos, int x)
{
    // check if the array is full?
    if (n==cap)
    {
        return n;
    }

    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = x;
    return n+1;
}

void insertion_sort(int* arr, int n)
{
    for (int i = 1; i < 2; i++)
    {
        // std::cout<<arr[i]<<"\n";
        // std::cout<<arr[i-1]<<"\n";
        bool flag = true;
        while (flag)
        {
            
            if (i==1 && arr[i] < arr[i-1])
            {
                array_insert(arr,i+1,i+2, i-1, arr[i]);
                std::cout<<arr[i]<<"\n";
                std::cout<<arr[i-1]<<"\n";
                // std::cout<<"1"<<"\n";
                flag = true;
            }
            
            else if (arr[i] < arr[i-1])
            {
                array_insert(arr,i+1,i+2, i-1, arr[i]);
                // std::cout<<"2"<<"\n";
                i--;
                flag = true;
            }
            else
            {
                flag = false;
                // std::cout<<"3"<<"\n";
            }
            std::cout<<arr[i]<<"\n";
            std::cout<<arr[i-1]<<"\n";
        }
    }
}

int main()
{
    int arr[] = {20,5,40,60,10,30, 0};
    int n= 6;
    int cap = 7;
    int x = 45;
    int pos = 3;
    // show_array(arr, n);

    insertion_sort(arr, n);
    // show_array(arr, n);

}