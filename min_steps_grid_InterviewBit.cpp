#include<bits/stdc++.h>

using namespace std;

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    vector<int> x = {1,-1,0,0,1,1,-1,-1};
    vector<int> y = {0,0,1,-1,1,-1,1,-1};
    int count = 0;
    for(int i=0;i<A.size()-1;i++)
    {
        int x_diff = A[i+1]-A[i];
        int y_diff = B[i+1]-B[i];
        while(min!=0)
        {
            int min = int(pow(x_diff-x[0],2) + pow(y_diff-y[0],2)); 
            int min_index = 0;
            for (int j = 1; j < x.size(); j++)
            {
                if(min>int(pow(x_diff-x[j],2) + pow(y_diff-y[j],2)))
                {
                    min = int(pow(x_diff-x[j],2) + pow(y_diff-y[j],2));
                    min_index = j;
                }
            }
            x_diff-=x[min_index];
            y_diff-=y[min_index];
            count+=1;
        }
        
    }

}