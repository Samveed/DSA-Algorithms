#include<bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &A) {
    
    vector<int> added_one;
    if(A[0]==0)
    {
        A.erase(A.begin());
    }
    // unsigned long long int num=0;
    // cout<<A.size()<<endl;
    // for(int i=0;i<A.size();i++)
    // {
    //     num+=(A[i]*pow(10,A.size()-i-1));
    // }
    // cout<<num<<endl;
    // num+=1;
    // int len_num = to_string(num).size();
    // for(int j=0;j<len_num;j++)
    // {
    //     int temp = num/pow(10,len_num-j-1);
    //     added_one.push_back(temp);
    //     num-=(temp*pow(10,len_num-j-1));
    // }
    if(A[A.size()-1]<9)
    {
        A[A.size()-1]++;
        added_one = A;
    }
    else
    {
        int j=1;
        A[A.size()-1]=0;
        A[A.size()-j-1]++;
        while(A[A.size()-j-1]>9 && j<A.size())
        {
            if(A[0]>9)
            {
                A[0] = 0;
                A.insert(A.begin(),1);
                break;
            }
            A[A.size()-j-1] = 0;
            A[A.size()-j-2]++;
            j++;
        }
        added_one = A;
    }
    return added_one;
}

int main()
{
    vector<int> A (5,9);
    vector<int> output;
    output = plusOne(A);
    for(int i=0;i<output.size();i++)
    {
        cout<<output[i]<<" ";
    }
}