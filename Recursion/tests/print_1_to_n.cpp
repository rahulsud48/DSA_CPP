#include<iostream>
void print_N_to_1(int n)
{
    //base condition
    if (n == 0)
        return;
    print_N_to_1(n-1);
    std::cout<<n;
}
// tail recursive
void print_N_to_1_tail_recursive(int n, int i)
{
    //base condition
    if (n == 0)
        return;
    std::cout<<i;
    print_N_to_1_tail_recursive(n-1, i+1);   
}
int main()
{
    print_N_to_1_tail_recursive(10, 1);
    std::cout<<"\n";
}