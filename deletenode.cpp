#include<iostream>
#include<cstdlib>
using namespace std;
struct Node
{
	int data;
	Node* next;
};
Node* head;int count=0;
void insertfirst(int val, Node* point) // for inserting new nodes
{
	Node* n = new Node;
	n->data = val;
	n->next = point;
	head = n;
}
void insert(int val, Node* point2)
{
	Node* n = new Node;
	Node* tmp = point2;
	n->data = val;
	n->next = NULL;
	while(tmp->next!=NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = n;

}
void del(int n, Node* point4) // for deleting the particular node
{
	Node* prev;
	Node* temp = point4;
	while(temp->data!=n)
	{
		prev = temp;
		temp = temp->next;
	}
	prev->next = temp->next;
	free(temp);
}
void print(Node* point3) // for printing the old/new node list
{
	while(point3!=NULL)
		{
			cout<<point3->data<<" ";
			point3 = point3->next;
		}
	count++;
}
int main()
{
	head = NULL;
	int number;
	cout<<"Enter the numbers "<<endl;
	cin>>number;
	print(head);
	insertfirst(number,head);
	for(int i=0;i<3;i++)
	{
		cin>>number;
		insert(number,head);
		print(head);
	}
	cout<<"Length "<<count<<endl; 
	//del(300,head);
	//print(head);
}