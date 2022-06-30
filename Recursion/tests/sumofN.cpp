#include<iostream>

int Nsum(int n)
{
    //base case
    if (n==0)
        return 0;

    return n+Nsum(n-1);
}

int Nsum_tail(int n, int k)
{
    //base case
    if (n==0)
        return k;

    return Nsum_tail(n-1, k+n);
}


int main()
{
    int n = 10;
    std::cout << Nsum(n) << "\n";
    std::cout << Nsum_tail(n, 0) << "\n";
}