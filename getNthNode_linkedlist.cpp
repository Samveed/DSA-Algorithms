#include<iostream>
#include<stdio.h>
#include "insertion_linkedlist.h"
using namespace std;

Node* head = new Node();

void printCircNodes(Node* node)
{
    Node* temp = node;
    int ct = 0;
    while(node!=temp || ct==0)
    {
        cout<<node->data<<endl;
        node = node->next;
        ct++;
    }
}

void printNodes(Node* node)
{
      while (node!=NULL)
      {
        cout<<node->data<<endl;
        node = node->next;
      }
}
int getNthNode(Node* node, int index)
{
    int counter = 0;
    while(counter!=index && node!=NULL)
    {
        node = node->next;
        counter++;
    }
    if (node==NULL)
    {
        cout<<"Index out of range"<<endl; 
        return -1;
    }
    return node->data;
    
}

int main()
    {
      //Node* head = new Node();
      Node* second = new Node();
      Node* third = new Node();
      Node* fourth = new Node();

      head->data = 1;
      head->next = second;

      second->data = 2;
      second->next = third;

      third->data = 3;
      third->next = fourth;

      fourth->data = 4;
      fourth->next = head;

      printCircNodes(fourth);




      //printNodes(head);

      int value_N = getNthNode(head, 0);
    //   cout<<value_N<<endl;
    }