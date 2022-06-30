#include<iostream>
#include<chrono>
#include<thread>

int first_occr_bs(int* arr, int n, int x)
{
    int high = n-1;
    int low = 0;
    int mid;

    while(low <= high)
    {
        mid = (high + low)/2;

        if ( arr[mid] == x)
        {
            if (mid ==0 || arr[mid-1] != arr[mid])
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
            
        }

        else if ( arr[mid] < x)
        {
            low = mid+1;

        }

        else
        {
            high = mid-1;

        }
    }

    return -1;
}

int last_occr_bs(int* arr, int n, int x)
{
    int high = n-1;
    int low = 0;
    int mid;

    while(low <= high)
    {
        mid = (high + low)/2;

        if ( arr[mid] == x)
        {
            if (mid ==0 || arr[mid+1] != arr[mid])
            {
                return mid;
            }
            else
            {
                low = mid + 1;
            }
            
        }

        else if ( arr[mid] < x)
        {
            low = mid+1;
        }

        else
        {
            high = mid-1;
        }
    }

    return -1;
}

int count_1s(int* arr, int n)
{
    int low = 0;
    int high = n -1;
    int mid = (low+high)/2;

    if (mid == 0)
    {
        // find right occurence
        int id0 = last_occr_bs(arr, n, 0);
        return n-id0 - 1;
    }

    else
    {
        // find left occurence
        int id1 = first_occr_bs(arr, n, 1);
        return n-id1;
    }
}

int main()
{
    int arr[] = {0,0,0,0,1,1,1,1,1,1};
    int n = 10;
    int count = count_1s(arr, n);
    std::cout << "The count of 1s in the array is: " << count << "\n";
}