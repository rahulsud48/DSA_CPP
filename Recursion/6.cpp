#include<iostream>

// Printing n to 1 using recursion

void fun(int n)
{
    if (n==0)
    {
        // stopping condition of a recursion is called Base cases
        return;
    }
    std::cout<<(n)<<"\n";
    fun(n-1);
    
}


int main()
{

    // Enter the value of n = 7
    fun(15);
    // outputs 111

}