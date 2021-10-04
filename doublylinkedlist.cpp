#include <bits/stdc++.h>
using namespace std;
struct Node
{

	int data;

	Node *next;
	Node *prev;
	Node(int n)
	{
		data = n;
		next = prev = NULL;
	}
};

void show(Node *head)
{

	Node *curr = head;
	Node *temp1 = head->prev;
	while (curr->next != head)
	{
		cout << curr->data << " ";
		curr = curr->next;
	}
}

Node *insertbegin(Node *head, int k)
{
	Node *temp = new Node(k);
	if (head == NULL)
	{
		return temp;
	}

	temp->next = head;
	head->prev = temp;
	return temp;
}

Node *doublyreverse(Node *head)
{
	Node *prev = NULL;
	Node *curr = head;
	if (head->next == NULL)
	{
		return head;
	}

	while (curr->next != NULL)
	{
		prev = curr->prev;
		curr->prev = curr->next;

		curr->next = prev;
		curr = curr->prev;
	}
	return prev->prev;
}
Node *circulardoublyinsert(Node *head, int k)
{
	Node *temp = new Node(k);
	temp->next = head->next;
	head->next->prev = temp;
	temp->prev = head;
	head->next = temp;
	int p = head->data;
	head->data = temp->data;
	temp->data = p;
	return head;
}

Node *addNode(Node *head, int pos, int data)
{
	// Your code here
	Node *temp = new Node(data);

	if (pos == 0)
	{
		temp->next = head->next;
		head->next->prev = temp;
		head->next = temp;
		temp->prev = head;
		return head;
	}
	int i = 0;
	Node *curr = head;
	while (i < pos - 1 && curr->next != NULL)
	{
		curr = curr->next;
		i++;
	}
	if (curr->next == NULL && i != pos - 1)
	{
		return head;
	}
	curr->next = temp;
	temp->prev = curr;
	return head;
}
int main()
{

	Node *head = new Node(10);
	Node *temp1 = new Node(20);
	Node *temp2 = new Node(30);
	// Node *temp3 = new Node(40);

	head->next = temp1;
	temp1->prev = head;
	temp1->next = temp2;
	temp2->prev = temp1;

	show(head);
	cout << endl;
	head = addNode(head, 2, 90);
	show(head);
	// temp2->next = temp3;
	// cout << endl;
	// head = insertbegin(head, 100);
	// show(head);
	// head = doublyreverse(head);
	// show(head);
}