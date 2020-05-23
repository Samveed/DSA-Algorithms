#include<stdio.h>
#include<iostream>
using namespace std;

void display(int n)
 {
     if(n>0)
     {
        // cout<<n<<endl;
        display(n-1);               
        cout<<"display "<<n<<endl; 
        display(n-1);
        cout<<"display "<<n<<endl;
     }
     else
     {
         return;
     }
     
 }

 int main()
 {
     display(3);
     return 0;
 }





