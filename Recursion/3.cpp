#include<iostream>

// this example is called direct recurssion

void fun1(int n)
{
    if (n==0)
    {
        // stopping condition of a recurssion is called Base cases
        return;
    }
    fun1(n-1);
    std::cout<< n << "\n";
    fun1(n-1);
}


int main()
{

    fun1(4);

}