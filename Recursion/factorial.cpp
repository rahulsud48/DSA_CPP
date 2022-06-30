#include<iostream>


int factorial(int n)
{
    if (n==0 or n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}


int main()
{
    std::cout<<" *** Factorail ***\n";
    std::cout<<" 5: = "<< factorial(5) << "\n";

}