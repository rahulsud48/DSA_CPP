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

    for (int j = n-1; j > 0; j--)
    {
    
        int max_num = -99999;
        int max_pos;
        
        for (int i = 0; i <= j; i++)
        {
            if (arr[i] >= max_num)
            {
                max_num = arr[i];
                max_pos = i;
            }
        }
        std::cout<< "\n";

        // swap
        arr[max_pos] = arr[j];
        arr[j] = max_num;
        std::cout<<"Max number: " << max_num << "\n";
        std::cout<<"Max position: " << max_pos << "\n";
        std::cout<<"Last position: " << j << "\n";
        show_array(arr, n);
    }

}

int main()
{
    int arr[] = {4,7,-2,9,-5,3,1,0,6,8};
    int n = 10;
    // show_array(arr, n);
    selection(arr, n);
}