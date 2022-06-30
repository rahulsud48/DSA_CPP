#include<iostream>
#include<string>
#include<vector>

void generateSubsets(std::string s, std::vector<std::string>& v, std::string curr="", int n=0)
{
    //base case
    if (n>= s.size())
    {
        // std::cout<<curr<<"\n";
        v.push_back(curr);
        return;
    }
        
    
    generateSubsets(s,v,curr,n+1);
    generateSubsets(s,v,curr+s[n],n+1);
    
}

int main()
{
    std::string s{"ABC"};
    std::vector<std::string> v;
    generateSubsets(s, v);

    for (int i=0; i<v.size(); i++)
    {
        std::cout<<v[i]<<"\n";
    }
}