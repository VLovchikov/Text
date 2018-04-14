#pragma once
#include <string>

using namespace std;



struct Node
{
	string str;
	Node *next;
	Node *down;
	Node()
	{
		str = "";
		down = next = NULL;
	}
};

struct st
{
	Node *node;
	st *next;
};

class Stack
{
	st *h;
public:
	Stack();
	~Stack();
	bool isEmpty();
	void push(Node *t);
	Node* pop();
};

