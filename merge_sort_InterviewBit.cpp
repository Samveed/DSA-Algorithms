#include<bits/stdc++.h>

using namespace std;

void merge(int* L, int* R, int* A, int left_len, int right_len)
{
    // int left_len = sizeof(L)/sizeof(L[0]);
    // int right_len = sizeof(R)/sizeof(R[0]);
    // cout<<left_len<<" "<<right_len<<endl;
    int i=0,j=0,k=0;
    while (i<left_len && j<right_len) 
    {
        if(L[i]<=R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<left_len)
    {
        A[k] = L[i];
        i++;
        k++;
    }
    while(j<right_len)
    {
        A[k] = R[j];
        j++;
        k++;
    }
}

void mergesort(int* A, int len_A)
{
    // int len_A = sizeof(A)/sizeof(A[0]);
    // cout<<"Length of A "<<len_A<<endl;
    // cout<<A[0]<<" "<<A[1]<<endl;
    if(len_A==1)
    {
        return;
    }
    int mid = len_A/2;
    // cout<<mid<<endl;
    int left[mid]; int right[len_A-mid];
    int left_len = 0; int right_len = 0;
    for(int i=0;i<mid;i++)
    {
        left[i] = A[i];
        left_len++;
    }
    for(int j=mid;j<len_A;j++)
    {
        // cout<<A[j]<<endl;
        right[j-mid] = A[j];
        right_len++;
    }
    // cout<<"Left "<<left[0]<<" "<<"Right "<<right[0]<<endl;
    mergesort(left, left_len);
    mergesort(right, right_len);
    merge(left,right,A, left_len, right_len);

}

int main()
{
    int len_array = 7;
    int input_arr[] = {3,1,17,12,2,15,11};
    // int input_arr[len_array];
    // for(int j=0;j<len_array;j++)
    // {
    //     cin>>input_arr[j];
    // }
    mergesort(input_arr, len_array);
    for(int i=0;i<len_array;i++)
    {
        cout<<input_arr[i]<<" ";
    }
}