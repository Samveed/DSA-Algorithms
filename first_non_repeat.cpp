// I took the wrong approach ; 
// LOOKED at the correct solution on GFG.

#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct QueueNode
{
    char data;
    QueueNode* next;

    QueueNode(char x)
    {
        data = x;
        next = NULL;
    }
};

struct Queue
{
    QueueNode* front= NULL;
    QueueNode* rear = NULL;

    void enqueue(char x)
    {
        QueueNode* newNode_data = new QueueNode(x);
        if(front==NULL)
        {
            front = newNode_data;
            rear = newNode_data;
            return;
        }
        rear->next = newNode_data;
        rear = newNode_data;

    }

    void dequeue()
    {
        if (front == NULL) 
            return; 

        QueueNode* temp = front;
        front = front->next;

        if(front==NULL)
        {
            rear = front;
        }

        delete(temp);
    }
};

int main()
{
    int N;
    cin>>N;

    char input[N];
    // Queue q;
    for(int i=0; i<N;i++)
    {
        cin>>input[i];
        // q.enqueue(input[i]);
    }

    int j=1; char last_char; 
    
    Queue q;
    q.enqueue(input[0]);
    while(j<N)
    {
        if(q.front->data!=input[j])
        {
            cout<<q.front->data<<" ";
            q.enqueue(input[j]);
            j++;
        }
        else
        {
            cout<<q.front->data<<" -1 ";
            while(input[j+1]==q.front->data && (j+1)<N)
            {   
                j++;
                // q.enqueue(input[current_pos]);
            }
            if((j+1)!=N)
            {   
                q.enqueue(input[(j+1)]);
                q.dequeue();
                j = j+1;
            }
        }
        
        
    }
    
}