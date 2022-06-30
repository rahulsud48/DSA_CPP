#include<iostream>

// Printing 1 to n using recursion

void fun(int n)
{
    if (n==0)
    {
        // stopping condition of a recursion is called Base cases
        return;
    }
    fun(n-1);
    std::cout<<(n)<<"\n";

    
}


int main()
{

    // Enter the value of n = 7
    fun(15);
    // outputs 111

}