#pragma once
#include <string>

using namespace std;

struct st
{
	Node *node;
	st *next;
};

struct Node
{
	string str;
	Node *next;
	Node *down;
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

