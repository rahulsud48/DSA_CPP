#include<iostream>
#include<tuple>

void show_array(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}

/////////////////////////////////////////////////////// 
// int _delete(int* arr, int n, int idx)
// {
//     for (int i = idx; i < n-1; i++)
//     {
//         arr[i] = arr[i+1];
//     }
//     arr[n-1] = 0;
//     return n-1;
// }

// int remove_duplicates(int* arr, int n)          // time complexity is O(n^2)
//                                                 // Aux space is O(1)
// {
//     for (int i = 0; i < n-1; i++)
//     {
//         if (arr[i] == arr[i+1])
//         {
//             n = _delete(arr, n, i+1);
//             i--;
//         }
//     }
//     return n;
// }
///////////////////////////////////////////////////////////

int remove_duplicates(int* arr, int n)          // time complexity is O(n)
                                                 // Aux space is O(1)
{
    int res = 1;
    
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i-1])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}




int main()
{
    int arr[] = {10,10,10, 20, 20 ,20, 20, 30 ,30};
    int n = 9;
    std::cout<<"The current array of size: " << n <<" is: ";show_array(arr, n);
    n = remove_duplicates(arr, n);
    std::cout<<"The array of size: " << n <<" without duplicates is: ";show_array(arr, n);




}