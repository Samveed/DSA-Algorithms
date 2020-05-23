#include<iostream>
#include<stdio.h>
#include<stdlib.h>

#define MAX 1000
using namespace std;

// class Stack
// {
    
//     public:
//     int top = -1;
//     int arr[MAX];
//     bool push(int x);
//     int pop();
//     int peep();
//     bool isEmpty();
// };

// bool Stack::push(int x)
// {
//     if (top >= (MAX - 1)) { 
//         cout << "Stack Overflow"; 
//         return false; 
//     } 
//     else
//     {
//         arr[++top] = x;
//         cout<<x<<" pushed to stack"<<endl;
//         return true;
//     }
// }

// int Stack::pop()
// {
//     if(top==-1)
//     {
//         cout << "Stack Underflow";
//         return -1; 
//     }
//     else
//     {
//         return arr[top];
//         top--;
//     }
    
// }
// int Stack::peep()
// {
//     if(top==-1)
//     {
//         cout<<"Stack is Empty"<<endl;
//         return -1;
//     }
//     else
//     {
//         cout<<arr[top]<<endl;
//         return arr[top];

//     }
// }

// bool Stack::isEmpty()
// {
//     if(top==-1)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
    
// }

struct StackNode{
    int data;
    StackNode* next;
};

StackNode* root = new StackNode();

StackNode* newNode(int data)
{
    StackNode* node = new StackNode();
    node->data = data;
    node->next = NULL;

    return node;
}

// void printNodes(StackNode* node)
// {
//       while (node!=NULL)
//       {
//         cout<<node->data<<endl;
//         node = node->next;
//       }
// }

void push(int x)
{
    StackNode* newDataNode = newNode(x);
    newDataNode->next = root;
    root = newDataNode;

    cout<<root->data<<endl;

    // cout<<root->data<<endl;
    // cout<<(root->next)->data<<endl;
    // cout<<newDataNode->data<<" is pushed on the stack"<<endl;
    // cout<<root->data<<endl;
}

int pop()
{
    // cout<<root->data<<endl;

    StackNode* temp = root;
    root = root->next;
    int popped = temp->data;
    free(temp);

    return popped;
}

bool isEmpty()
{
    if(root==NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int peek()
{
    if (isEmpty())
    {
        return -1;
    }
    else
    {
        return root->data;
    }
}

int main() 
{ 
    // class Stack s;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.pop();

    // s.peep();

    push(10);
    // cout<<root->data<<endl;
    // printNodes(root);
    push(20);
    // printNodes(root);
    push(30);


    // cout<<root->data<<endl;
    int check_pop = pop();
    cout<<check_pop<<endl;
}