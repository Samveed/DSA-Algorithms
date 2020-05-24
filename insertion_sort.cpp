#include<bits/stdc++.h>

using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int len_array; cin>>len_array;
    int arr[] = {10,8,25,11,3};

    int next_index,elem;
    for(int i=0;i<len_array-1;i++)
    {
        next_index = i+1;

        while (next_index>0)
        {
            if(arr[next_index]<arr[next_index-1])
            {
                swap(arr[next_index],arr[next_index-1]);
                next_index--;
            }
            else
            {
                break;
            }
            
        }
        
    }

    for (int i = 0; i < len_array; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}