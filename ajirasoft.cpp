#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int pass=0;
    int floor_building[N][2];

    for(int i=0;i<N-1; i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>floor_building[i][j];
        }
    }
    int count[N];
    for(int k=0; k<N; k++)
    {
        count[k] = 1;
    }

    int current_floor = 1;
    while(current_floor!=N)
    {
        if(count[current_floor-1]%2!=0)
        {
            count[current_floor-1]+=1;
            current_floor = floor_building[current_floor-1][0];
        }
        else
        {
            count[current_floor-1]+=1;
            current_floor = floor_building[current_floor-1][1];
        }
        pass+=1;
        if(pass>100000)
        {
            cout<<"Impossible"<<endl;
            return 0;
        }
    }
    cout<<pass<<endl;
}