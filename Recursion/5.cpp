#include<iostream>

// this example is for printing base 2 number from base 10 number

void fun(int n)
{
    if (n==0)
    {
        // stopping condition of a recurssion is called Base cases
        return;
    }
    fun(n/2);
    std::cout<<(n%2);
}


int main()
{

    // Enter the value of n = 7
    fun(15);
    // outputs 111

}