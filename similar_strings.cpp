#include<iostream>
#include<string>

using namespace std;

// Assuming same length strings

bool similar_strings(string first, string second)
{
    int string_length = first.length();
    int ct=0;
    for(int i=0;i<string_length;i++)
    {
        if(first[i]!=second[i])
        {
            ct++;
        }
        if(ct>2)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string first, second;
    cin>>first>>second;
    bool check = similar_strings(first, second);
    cout<<check<<endl;
}
