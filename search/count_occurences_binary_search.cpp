#include<iostream>
#include<chrono>
#include<thread>

void show_array(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}


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

int count_occr_bs(int* arr, int n, int x)
{
    int idf, idl;
    idf = first_occr_bs(arr, n ,x);
    if (idf == -1)
    {
        return 0;
    }
    else
    {
        idl = last_occr_bs(arr,n,x);
        return idl - idf + 1;
    }
    
}

int main()
{
    int arr[] = {1,1,1,4,5,6,6,6,6,6,6,6,7,8,9};
    int n = 15;
    int f = 1;
    int idf, idl, count;
    std::cout<<"The current array of size: " << n <<" is: ";show_array(arr, n);
    idf = first_occr_bs(arr, n, f);
    std::cout<<"The first occurance id is: " << idf << "\n";
    idl = last_occr_bs(arr, n, f);
    std::cout<<"The last occurance id is: " << idl << "\n";
    count = count_occr_bs(arr, n, f);
    std::cout<<"The count of "<<f<<" is: " << count << "\n";
}