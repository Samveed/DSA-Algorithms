#include<iostream>

using namespace std;
struct Node
{
	int data;
	Node* next;
};
Node* head;
//Node* temp;

void push(Node* head_ref,int new_data) 
{ 
	/* 1. allocate node */
	Node* new_node = new Node; 

	/* 2. put in the data */
	new_node->data = new_data; 

	/* 3. Make next of new node as head */
	new_node->next = (head_ref); 

	/* 4. move the head to point to the new node */
	(head_ref) = new_node; 
} 

/* Given a node prev_node, insert a new node after the given 
prev_node */
void addnew(Node* head_ref, int new_data) 
{ 
	/* 1. allocate node */
	Node* new_node = new Node;
	struct Node *last = head_ref; /* used in step 5*/

	/* 2. put in the data */
	new_node->data = new_data; 

	//  3. This new node is going to be the last node, so make next of 
	// 	it as NULL
	new_node->next = NULL; 

	/* 4. If the Linked List is empty, then make the new node as head */
	if (head_ref == NULL) 
	{ 
	head_ref = new_node; 
	return; 
	} 

	/* 5. Else traverse till the last node */
	while (last->next != NULL) 
		last = last->next; 

	/* 6. Change the next of last node */
	last->next = new_node; 
	return; 
} 

void print(Node* temp)
{
	//cout<<temp<<endl;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		//cout<<temp->next<<" ";
		temp = temp->next;
	}
}

int main()
{
	head= NULL;
	//Node* temp = head;
	//temp = head;
	int numberofnodes,numbers;
	cout<<"Enter the number of nodes "<<endl;
	cin>>numberofnodes;
	push(head,8);
	print(head);
	for (int i = 0; i < numberofnodes; i++)
	{
		cout<<"Enter the numbers/data entered in the nodes "<<endl;
		cin>>numbers;
		addnew(head,numbers);
		//addnew(numbers,temp);
		print(head);
		//print(temp);
	}
}