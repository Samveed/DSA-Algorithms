#include<iostream>
#include<cstdlib>
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
	
}

void delt(int dat,Node* temp)
{

	//Node* temp1;
	Node* prev;
	cout<<"Hoooo"<<endl;
	cout<<temp->data<<endl;
	if(temp!=NULL && temp->data==dat){
		prev = temp->next;
		head = prev;
		free(temp);
		cout<<"123";
		return;
	}
	cout<<"123";
	while(temp!=NULL && temp->data!=dat)
		prev = temp;
		temp = temp->next;
	if (temp == NULL)
		cout<<"123456"<<endl;
		return; 
	prev->next = temp->next;
	free(temp);
	
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
	
	delt(4,head);
	print(head);

}