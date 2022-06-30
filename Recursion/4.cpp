#include<iostream>

// this example is for printing logn

int fun(int n)
{
    if (n==1)
    {
        // stopping condition of a recurssion is called Base cases
        return 0;
    }
    else 
    {
        return 1+fun(n/2);
    }
}


int main()
{

    // Enter the value of n
    std::cout<<fun(8)<<"\n";
    // outputs 3

}