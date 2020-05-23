// Did Not complete.. Saw the solution from GFG
// Approach was correct but improper execution

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printNodes(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << endl;
        node = node->next;
    }
}

Node *first = NULL;

Node *enter_LL(int value, Node *prevNode)
{
    Node *temp_node = new Node(value);
    if (prevNode == NULL)
    {
        prevNode = temp_node;
    }
    else
    {
        prevNode->next = temp_node;
        prevNode = prevNode->next;
    }
    return prevNode;
}

Node *even_odd(Node *head)
{
    Node *temp = head;
    int first_odd = 0;
    int ct = 0;
    Node *first_odd_Node;
    Node *first_even_Node; Node* even_Node;
    Node* odd_Node;
    while (temp != NULL)
    {
        if ((temp->data) % 2 != 0 && first_odd == 0)
        {
            first_odd_Node = temp;
            first_odd++;
        }
        if ((temp->data) % 2 == 0)
        {
            Node *to_be_deleted = temp;
            if (first_odd == 0)
            {
                first_even_Node = temp = even_Node;
            }
            else
            {
                even_Node->next = temp;
                even_Node = temp;

                odd_Node->next = temp->next;
            }
            ct++;
            free(to_be_deleted);
        }
        else
        {
            odd_Node = temp;
        }
        temp = temp->next;
        
    }
}

int main()
{
    Node *second, *third;
    first = enter_LL(3, first);
    second = enter_LL(4, first);
    third = enter_LL(6, second);

    printNodes(first);
}
