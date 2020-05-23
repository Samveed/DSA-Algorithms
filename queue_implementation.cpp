#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct QueueNode
{
    int data;
    QueueNode* next;

    QueueNode(int x)
    {
        data = x;
        next = NULL;
    }
};

QueueNode arr[10];


struct Queue
{
    QueueNode* front, *rear;

    void enqueue(int x)
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
    Queue q;
    q.enqueue(10); 
    q.enqueue(20); 
    q.enqueue(30);
    cout << "Queue Front : " << (q.front)->data << endl;
    q.dequeue();
    cout << "Queue Front : " << (q.front)->data << endl;
    cout << "Queue Rear : " << (q.rear)->data<<endl;

}
