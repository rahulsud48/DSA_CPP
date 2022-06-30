#include<iostream>

int ropeCut(int n, int a, int b, int c)
{
    if (n==0) return 0;
    if (n<0) return -1;

    int res = std::max(ropeCut(n-a,a,b,c), std::max(ropeCut(n-b, a,b,c), ropeCut(n-c,a,b,c)));
    if (res==-1) return -1;
    return res+1;
}

int main()
{
    int rope = 23;
    int a=11;
    int b=9;
    int c=12;

    std::cout<<"The number of rope cuts is: " << ropeCut(23,11,9,12)<<"\n";

}
