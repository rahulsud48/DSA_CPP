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

int binary_search_iterative(int* arr, int n, int x)
{
    int high = n-1;
    int low = 0;
    int mid;

    while(low <= high)
    {
        mid = (high + low)/2;

        std::cout << "high: " << high << "\n";
        std::cout << "mid: " << mid << "\n";
        std::cout << "low: " << low << "\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));

        if ( arr[mid] == x)
        {
            return mid;
        }

        else if ( arr[mid] < x)
        {
            low = mid+1;
            mid = (low + high)/2;
        }

        else
        {
            high = mid-1;
            mid = (low + high)/2;
        }
    }

    return -1;
}


int binary_search_1st_element_iterative(int* arr, int n, int x)
{
    int high = n-1;
    int low = 0;
    int mid;

    while(low <= high)
    {
        mid = (high + low)/2;

        std::cout << "high: " << high << "\n";
        std::cout << "mid: " << mid << "\n";
        std::cout << "low: " << low << "\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));

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
            mid = (low + high)/2;
        }

        else
        {
            high = mid-1;
            mid = (low + high)/2;
        }
    }

    return -1;
}


int binary_search_last_element_iterative(int* arr, int n, int x)
{
    int high = n-1;
    int low = 0;
    int mid;

    while(low <= high)
    {
        mid = (high + low)/2;

        std::cout << "high: " << high << "\n";
        std::cout << "mid: " << mid << "\n";
        std::cout << "low: " << low << "\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));

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
            mid = (low + high)/2;
        }

        else
        {
            high = mid-1;
            mid = (low + high)/2;
        }
    }

    return -1;
}



int recursive_binary_search(int* arr, int n, int x, int high, int low)
{
    int mid = (high+low)/2;
    if (low >= high)
    {
        return -1;
    }
    // stopping condition
    if (arr[mid] == x)
    {
        return mid;
    }

    else if (arr[mid] < x)
    {
        low = mid+1;
    }
    else
    {
        high = mid-1;
    }

    mid = recursive_binary_search(arr, n, x, high, low);

}

int recursive_binary_search_1st_element(int* arr, int n, int x, int high, int low)
{
    int mid = (high+low)/2;
    if (low >= high)
    {
        return -1;
    }
    // stopping condition
    if (arr[mid] == x)
    {
        if (mid == n || arr[mid-1] != arr[mid])
        {
            return mid;
        }
        else
        {
            high = mid -1;
            mid = recursive_binary_search_1st_element(arr, n, x, high, low);
        }
    }

    else if (arr[mid] < x)
    {
        low = mid+1;
        mid = recursive_binary_search_1st_element(arr, n, x, high, low);
    }
    else
    {
        high = mid-1;
        mid = recursive_binary_search_1st_element(arr, n, x, high, low);
    }

}

int recursive_binary_search_last_element(int* arr, int n, int x, int high, int low)
{
    int mid = (high+low)/2;
    if (low >= high)
    {
        return -1;
    }
    // stopping condition
    if (arr[mid] == x)
    {
        if (mid == n || arr[mid+1] != arr[mid])
        {
            return mid;
        }
        else
        {
            low = mid + 1;
            mid = recursive_binary_search_last_element(arr, n, x, high, low);
        }
    }

    else if (arr[mid] < x)
    {
        low = mid+1;
        mid = recursive_binary_search_last_element(arr, n, x, high, low);
    }
    else
    {
        high = mid-1;
        mid = recursive_binary_search_last_element(arr, n, x, high, low);
    }

}


int main()
{
    int arr[] = {1,2,3,4,5,6,6,6,6,6,6,6,7,8,9};
    int n = 15;
    int f = 6;
    std::cout<<"The current array of size: " << n <<" is: ";show_array(arr, n);
    // n = binary_search_iterative(arr, n, f);
    // n = recursive_binary_search(arr, n, f, n-1, 0);
    // n = binary_search_1st_element_iterative(arr, n, f);
    // n = recursive_binary_search_1st_element(arr, n, f, n-1, 0);
    // n = binary_search_last_element_iterative(arr, n, f);
    n = recursive_binary_search_last_element(arr, n, f, n-1, 0);
    std::cout<<"The index is: " << n << "\n";
}