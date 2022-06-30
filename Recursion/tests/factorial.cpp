#include<iostream>

int factorial(int n)
{
    //base case
    if (n==0 || n==1)
        return 1;
    return n*factorial(n-1);
}

int factorial_tail_recursive(int n, int k)
{
    //base case
    if (n==0 || n==1)
        return k;
    return factorial_tail_recursive(n-1, k*n);
}

int fact(double n)
{
    double prod = 1;
    for (int i=1; i <= n; i++)
    {
        prod *=i;
    }
    return prod;
}

int main()
{
    double n = 5;
    // std::cout << factorial(n) << "\n";
    // std::cout << factorial_tail_recursive(n, 1) << "\n";
    std::cout << fact(n) << "\n";
}