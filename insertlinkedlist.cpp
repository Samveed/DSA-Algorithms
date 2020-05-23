#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
};
Node *head;
void insertback(int val,Node* temp)
{
	if(temp == NULL)
	{
		Node* n = new Node;
		n->data = val;
		n->next = temp;
		head = n;
	}
	else
	{
		//cout<<"HHH";
		while(temp->next!=NULL)
			temp = temp->next;
		Node* temp1 = new Node;
		temp1->data = val;
		temp1->next = NULL;
		temp->next = temp1;	
	}
    //cout<<"Hi"<<endl;
	
}

void print(Node* addr1)
{
	while(addr1!=NULL)
	{
		cout<<addr1->data;
		addr1 = addr1->next;
	}
}
int main()
{
	head = NULL;
	//Node *temp = head;
	int n,number;
	cout<<"Enter # of numbers "<<endl;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cout<<"Enter the numbers ";
		cin>>number;
		insertback(number,head);
		print(head);
	}

}