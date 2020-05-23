#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int children[n];
    int min_cars=0;

    for(int i=0;i<n;i++)
    {
        cin>>children[i];
    }

    int map_children[4]={0,0,0,0};
    for(int j=0;j<n;j++)
    {
        map_children[children[j]-1]++;
    }

    // for(int i=0;i<4;i++)
    // {
    //     cout<<map_children[i]<<" ";
    // }

    min_cars+=map_children[3];
    while (map_children[0]>0 || map_children[1]>0 || map_children[2]>0)
    {
        // cout<<min_cars;
        if(map_children[0]>3)
        {
            map_children[0]-=4;
            min_cars+=1;
        }
        else if(map_children[1]>1)
        {
            // cout<<"2 2 "<<min_cars<<endl;
             map_children[1]-=2;
             min_cars+=1;
        }
        else if(map_children[0]>1 && map_children[1]>0)
        {
            // cout<<"2 1 1 "<<min_cars<<endl;
            map_children[0]-=2;
            map_children[1]-=1;
            min_cars+=1;
        }
        else if(map_children[0]>0 && map_children[2]>0)
        {
            // cout<<"3 1 "<<min_cars<<endl;
             map_children[0]-=1;
             map_children[2]-=1;
             min_cars+=1;
            
        }
        else if(map_children[0]==1 && map_children[1]==1)
        {
            map_children[0]=0; map_children[1]=0;
            // cout<<min_cars<<endl;
            min_cars+=1;
        }
        else if(map_children[0]>0 && map_children[0]<4)
        {
            // cout<<" Less than 4 1's "<<min_cars<<endl;
            map_children[0]=0;
            min_cars+=1;
        }
        else if(map_children[1]>0)
        {
            // cout<<"2 "<<min_cars<<endl;
            map_children[1]=0;
            min_cars+=1;
        }
        else if(map_children[2]>0)
        {
            // cout<<"3 "<<min_cars<<endl;
            min_cars+=map_children[2];
            map_children[2]=0;
            // cout<<min_cars<<endl;
        }
    }
    cout<<min_cars;
    
}