#include<bits/stdc++.h>

using namespace std;

vector<int> maxset(vector<int> &A) {
    vector<int> non_neg; bool check_pos = false;
    vector<vector<int> > sub_array; int index =0;
    long long int sum=0;
    long long int max = -1;
    cout<<"Hi"<<endl;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]>=0)
        {
            non_neg.push_back(A[i]);
        }
        else
        {
            check_pos = true;
            sub_array.push_back(non_neg);
            non_neg.clear();
        } 
    }
    for(int i=0;i<sub_array.size();i++)
    {
        for(int j=0;j<sub_array[i].size();j++)
        {
            cout<<sub_array[i][j]<<" ";
        }
    }
    if(!check_pos)
    {
        return A;
    }
    if(sub_array.size()==0)
    {
        return sub_array[0];
    }
    for(int i=0;i<sub_array.size();i++)
    {
        sum=0;
        for(int j=0;j<sub_array[i].size();j++)
        {
            sum+=sub_array[i][j];
        }
        if(max>sum)
        {
            max = sum;
            index = i;
        }
    }
    return sub_array[index];

}

int main()
{
    vector<int> subarray;
    int N; cin>>N;

    for(int i=0;i<N;i++)
    {
        cin>>subarray[i];
    }
    vector<int> output;
    // cout<<"Hiii "<<endl;
    output = maxset(subarray);
    for(int j=0;j<output.size();j++)
    {
        cout<<output[j]<<" ";
    }
}