#include<iostream>
#include<cstdlib>
//#include<conio.h>
//#include<process.h>
using namespace std;
struct Node
{
	int data;
	Node* next;
};
Node* head;
void insert(int dataval)
{
	Node* n = new Node;
	n->data = dataval;
	n->next = head;
	head = n;
}
void print()
{
	Node* temp = head;
	while(temp!= NULL)
	{
		cout<<temp->data;
		temp = temp->next; 
	}
}
int main()
{
	head = NULL;
	int x;
	for(int i=0;i<5;i++)
	{
		cout<<" Enter number "<<endl;
		cin>>x;
		insert(x);
		print();
	}
}
// Node* temp = new Node;
// void addition()
// {
// 	Node* head = NULL;
// 	Node* temp = new Node;
// 	temp->data = 2;
// 	temp->next = NULL;
// 	head = temp;

// }

// int main(int argc, char const *argv[])
// {
// 	/* code */
// 	return 0;
// }
