#include <chrono>
#include <iostream>

void fun1(int n)
{
    auto t1 = std::chrono::high_resolution_clock::now();
    int sum = n*(n+1)/2;
    auto t2 = std::chrono::high_resolution_clock::now(); // stop time measurement
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count();
    std::cout << "Execution time for fun1: " << duration << " nanoseconds" << std::endl;
}

void fun2(int n)
{
    auto t1 = std::chrono::high_resolution_clock::now();
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    auto t2 = std::chrono::high_resolution_clock::now(); // stop time measurement
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count();
    std::cout << "Execution time for fun2: " << duration << " nanoseconds" << std::endl;

}

int fun3(int n)
{
    auto t1 = std::chrono::high_resolution_clock::now();
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            sum++;
        }
    }
    auto t2 = std::chrono::high_resolution_clock::now(); // stop time measurement
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count();
    std::cout << "Execution time for fun3: " << duration << " nanoseconds" << std::endl;
}

int main()
{
    int n = 1200;
    fun1(n);
    fun2(n);
    fun3(n);
}