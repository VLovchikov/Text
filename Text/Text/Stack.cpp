#include "Stack.h"



Stack::Stack()
{
	h = NULL;
}


Stack::~Stack()
{
}

bool Stack::isEmpty()
{
	return (h == NULL);
}

void Stack::push(Node * t)
{
	st *tt = new st;
	tt->node = t;
	tt->next = NULL;
	if (h == NULL)
	{
		h = tt;
	}
	else
	{
		st *s = tt;
		tt->next = h;
		h = tt;
	}
}

Node * Stack::pop()
{
	if (isEmpty()) throw - 1;
	st *s = h;
	Node *t = h->node;
	h = h->next;
	delete s;
	return t;
}
