#include<iostream>

// this example is called direct recurssion

void fun1(int n)
{
    if (n==0)
    {
        // stopping condition of a recurssion is called Base cases
        return;
    }
    std::cout<<"value of n is: "<< n << "\n";
    fun1(n-1);
}


int main()
{
    std::cout<<"before fun2 \n";
    fun1(10);
    std::cout<<"after fun2 \n";
}
