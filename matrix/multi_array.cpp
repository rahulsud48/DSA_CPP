#include<iostream>

int main()
{
    int m= 3, n=2;
    int arr[m][n] = {{10,20},
                     {30,40},
                     {50,60}};

    for (int i = 0; i < 3; i++)
    {
        for (int j=0;j<2;j++)
        {
            std::cout<<arr[i][j]<< " ";
        }
        std::cout<<"\n";
    }

}