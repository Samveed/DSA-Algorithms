#include<bits/stdc++.h>

using namespace std;

vector<vector<int> > prettyPrint(int A) {

    vector<vector<int> > concentric_matrix(2*A-1, vector<int> (2*A-1));
    // int concentric_matrix[2*A-1][2*A-1];
    concentric_matrix[A-1][A-1] = 1;
    int LC = 0; int RC = 2*A-2;
    int LR = 0; int RR = 2*A-2;
    int direction = 0;

    while(LC!=RC || LR!=RR)
    {
        if(direction==0)
        {
            for(int j=LC;j<=RC;j++)
            {
                concentric_matrix[LR][j] = A;
            }
            LR++;
            direction=1;
        }
        if(direction==1)
        {
            for(int j=LR;j<=RR;j++)
            {
                concentric_matrix[j][RC] = A;
            }
            RC--;
            direction=2;
        }
        if(direction==2)
        {
            for(int j=RC;j>=LC;j--)
            {
                concentric_matrix[RR][j] = A;
            }
            RR--;
            direction=3;
        }
        if(direction==3)
        {
            for(int j=RR;j>=LR;j--)
            {
                concentric_matrix[j][LC] = A;
            }
            LC++;
            direction=0;
        }
        A--;
    }
    return concentric_matrix;
}

int main()
{
    int A; 
    cin>>A;
    vector<vector<int> > matrix(2*A-1, vector<int> (2*A-1));
    matrix = prettyPrint(A);
    for (int i = 0; i < 2*A-1; i++)
    {
        for(int j=0; j< 2*A-1; j++)
        {
            cout<< matrix[i][j]<< " ";
        }
        cout<<endl;
    }
    
}