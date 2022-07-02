#include<iostream>

int bs_rotated_arr(int* arr, int n, int x)
{
    int n_ = n-1;

    int low;
    int high;
    int mid;

    while (arr[n_] > arr[n_-1])
    {
        n_--;
    }

    if (arr[n_ - 1] == x)
    {
        return n_ - 1;
    }
    else if (arr[n] < x)
    {
        high = n_ - 1;
        low = 0;
    }
    else
    {
        low = n_ - 1;
        high = n - 1;
    }



    while (low <= high)
    {
        mid = (low+high)/2;

        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {3,4,5,6,7,8,9,0,1,2};
    int n = 10;
    int x = 3;
    
    int idx = bs_rotated_arr(arr, n, x);

    std::cout<<"The index is: " << idx << "\n";
}