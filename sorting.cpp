#include<stdio.h>
#include<iostream>

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
        cout<<array_input[i]<<endl;
    }
}

int* insertion_sort(int* array_input, int len_array)
{
    //int* temp_sorted_array[len_array];
    
    for(int j=0; j<len_array-1;j++)
    {
        int temp;
        for(int k=0;k<j+1;k++)
        {
            if(array_input[k]>array_input[j+1])
            {
                temp = array_input[k];
                array_input[j+1] = array_input[k];
                temp = array_input[j+1];
            }
        }
    }
    return array_input;
}

//Borrowed from GeeksForGeeks

int* insertionSort(int arr[], int n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        /* Move elements of arr[0..i-1], that are  
        greater than key, to one position ahead  
        of their current position */
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
    return arr;
}

int* bubble_sort(int *array_input, int len_array)
{
    for(int j=0; j<len_array;j++)
    {
        for(int k=0; k<len_array-j-1; k++)
        {
            int temp;
            if(array_input[k]>array_input[k+1])
            {
                temp = array_input[k+1];
                array_input[k+1] = array_input[k];
                array_input[k] = temp;
            }
        }
    }
    return array_input;
}

int main()
{
    int len_array;
    cin>>len_array;
    int arr[len_array];
    
    int* array_input = input(arr, len_array); 
    int* sorted_bubble_array = bubble_sort(array_input, len_array);
    //print(sorted_bubble_array, len_array);
    int* sorted_insertion_array = insertionSort(array_input, len_array);
    print(sorted_insertion_array, len_array);
}
