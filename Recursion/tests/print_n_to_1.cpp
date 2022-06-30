#include<iostream>

void print_N_to_1(int n)
{
    //base condition
    if (n == 0)
        return;
    std::cout<<n;
    print_N_to_1(n-1);
}

int main()
{
    print_N_to_1(10);
    std::cout<<"\n";
}