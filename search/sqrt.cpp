#include<iostream>
#include<chrono>
#include<thread>

int findSQRT(int x)
{
    int s = x;
    while ((s/2)*(s/2) > x)
    {
        std::cout<<s<<"\n";
        s = s/2;
    }

    //stash after commit
    // Very wrong
    //some changes in main for stashing
    // while ((2*s)^2 < x)
    // {
    //     std::cout<<s<<"\n";
    //     s = 2*s; 
    // }
    return s;
}

int main()
{
    int x = 25;
    std::cout << "The SQRT of " << x << " is: " << findSQRT(x) << "\n";
}