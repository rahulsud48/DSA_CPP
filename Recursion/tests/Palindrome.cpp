#include<iostream>
#include<string>

bool palindrome(std::string& s, int start, int end)
{
    if (start >= end)
        return true;

    return (s[start] == s[end] && palindrome(s, start+1, end-1));
}

bool palindrom_testing(std::string& s, int start, int end)
{
    //base case
    if (start >= end)
        return true;

    return (s[start] == s[end] && palindrom_testing(s, start+1, end-1));
}

int main()
{
    std::string s{"rahara"};
    std::cout<<"Input string is: " << s << "\n";
    std::cout<<"Is Palindrome: " << palindrom_testing(s, 0, s.size() - 1) << "\n";
}