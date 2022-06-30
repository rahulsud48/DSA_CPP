#include<iostream>

int digitSum(int num)
{
    //base case
    if (num <=0)
        return 0;

    return num%10+digitSum(num/10);
}

int main()
{
    int num = 10;
    std::cout<<"the sum of digits of "<<num<<" is: "<< digitSum(num) << "\n";
}