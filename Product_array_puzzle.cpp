#include<iostream>
#include<stdio.h>

using namespace std;

int* input(int* arr, int len_array)
{
    for(int i=0; i<len_array;i++)
    {
        cin>>arr[i];
    }
    return arr;
}

int print(int *array_input, int len_array)
{
    for(int i=0; i<len_array; i++)
    {
        cout<<array_input[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    cout<<sizeof(int)<<endl;
    int T;
    cin>>T;
    for(int i=0;i<T; i++)
    {

        int N;
        cin>>N;
        int arr[N];
        int* A = input(arr, N);
        int product=1;
        for(int k=0; k<N; k++)
        {
            product*= A[k];
        }
        int P[N];
        for(int j=0; j<N; j++)
        {
            P[j] = product/A[j];
        }
        print(P, N);
    }
}