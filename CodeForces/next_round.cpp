#include<vector>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> input;

    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        input.push_back(temp);
    }
    int value_k = input[k-1];
    int count = 0;
    
    for(int j=0;j<n;j++)
    {
        if(input[j]>=value_k && input[j]!=0) count++;
    }

    cout<<count;
}