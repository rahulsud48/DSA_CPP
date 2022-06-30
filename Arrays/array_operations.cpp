#include<iostream>

int search(int arr[], int n, int x)
{
    for (int i=0; i<n; i++)
    {
        // std::cout<<arr<<"\n";
        if (arr[i] == x)
        {
            
            return i;
        }
            
    }

    return -1; 
    // time complexity is O(n)
    // Aux space complexity is O(1)
}

int insert(int arr[], int n, int x, int cap, int pos)
{
    //check if array is full
    if (n == cap)
        return n;
    //move to right side
    for (int i = n-1; i >= pos-1; i--)
    {
        arr[i+1] = arr[i];
    }
    // insert
    arr[pos-1] = x;
    return n+1;

    // time complexity is O(n)
}

int _delete(int* arr, int n, int x)
{
    int idx = search(arr, n, x);
    if (idx == -1)
        return n;

    for (int i = idx; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }

    arr[n] = 0;
    return n-1;
}

int main()
{
    int arr[5], cap = 5, n = 4;
    arr[0] = 5; arr[1] = 10; arr[2] = 20, arr[3] = 30;
    std::cout<<"Before Insertion"<<std::endl;
    for(int i=0; i < n; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;

    //insert
    int x = 7, pos = 2;
    n = insert(arr, n, x, cap, pos);

    std::cout<<"After Insertion"<<std::endl;
    for(int i=0; i < n; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;

    //delete
    n = _delete(arr, n, x);
    std::cout<<"After deletion"<<std::endl;

    for(int i=0; i < n; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}