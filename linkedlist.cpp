#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

void printLinkedList(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node* insertFront(Node* head, Node* newData)
{
    newData->next = head;
    head = newData;

    return head;
}

void addNode(Node* prevNode, Node* newData)
{
    if(prevNode->next == NULL)
    {
        prevNode->next = newData;
        newData->next = NULL;
    }
    
    else
    {
        Node* temp = prevNode->next;
        prevNode->next = newData;
        newData->next = temp;
    }
    
}

void deleteNode(Node* to_be_deleted_Node, Node* head)
{
    Node* temp = head;
    if(to_be_deleted_Node == head)
    {
        // cout<<"True"<<endl;
        head = head->next;
        cout<<head->data<<endl;
        // cout<<to_be_deleted_Node->data<<endl;
        free(to_be_deleted_Node);
        // cout<<head->data<<endl;
        return ;
    }
    while(temp->next!=to_be_deleted_Node)
    {
        temp = temp->next;
    }
    temp->next = to_be_deleted_Node->next;
    free(to_be_deleted_Node);
}

Node* deleteNode_at_position(int pos, Node* head)
{
    Node* temp = head;

    if(pos == 0)
    {
        head = temp->next;
        // cout<<head<<endl;
        // cout<<temp<<endl;

        free(temp);
    }
    else
    {
        int ct = 0;
        while(pos!=ct+1)
        {
            temp = temp->next;
            ct+=1;
        }
        Node* to_be_deleted_at_position = temp->next;
        temp->next = to_be_deleted_at_position->next;
        free(to_be_deleted_at_position);
    }
    return head;
    
}

int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* inserted_data = new Node();

    head->data = 0;
    head->next = second;

    second->data = 1;
    second->next = third;

    third->data = 2;
    third->next = NULL;

    inserted_data->data = 4;
    addNode(third,inserted_data);

    //head = insertFront(head, third);
    // deleteNode(head, head);
    head = deleteNode_at_position(0, head);
    printLinkedList(head);
}