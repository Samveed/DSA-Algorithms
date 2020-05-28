#include<bits/stdc++.h>

using namespace std;

void swap( int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int ct = 0;
// int partition_Index = 0;
int partition(int* A, int start, int end)
{
    int pivot = A[end];
    int partition_Index = start;
    // swap(A[partition_Index],A[end]);
    // cout<<start<<" "<<end<<endl;
    for(int i=start;i<end;i++)
    {
        if(A[i]<=pivot)
        {
            swap(A[i],A[partition_Index]);
            partition_Index++;
        }
    }
    // cout<<partition_Index<<endl;
    swap(A[partition_Index], A[end]);
    // cout<<A[0]<<" "<<A[1]<<" "<<A[2]<<" "<<A[3]<<" "<<A[4]<<" "<<endl;
    return partition_Index;
}

void QuickSort(int* A, int start, int end)
{
    int partition_Index;
    if(start<end)
    {
        partition_Index = partition(A, start, end);
        // cout<<partition_Index<<endl;
        // ct++;
        // if(ct==2)
        // {
        //     return;
        // }
        QuickSort(A, start, partition_Index-1);
        QuickSort(A, partition_Index+1, end);
    }
    else
    {
        return;
    }
}

int main()
{
    int len_array = 7;
    int input_arr[] = {3,1,7,4,2,9,0};
    // int input_arr[] = {3,1,7,4,2};
    QuickSort(input_arr,0, len_array-1);
    for(int i=0;i<len_array;i++)
    {
        cout<<input_arr[i]<<" ";
    }
}