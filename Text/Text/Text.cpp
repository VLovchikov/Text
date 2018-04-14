#include "Text.h"



Text::Text()
{
	h = new Node;
	curr = h;
	h->str = "Part 1";
}

void Text::down()
{
	if (curr->down == NULL) throw - 2;
	st.push(curr);
	curr = curr->down;
}

void Text::next()
{
	if (curr->next == NULL) throw - 2;
	st.push(curr);
	curr = curr->next;
}

void Text::back()
{
	if (st.isEmpty()) throw - 3;
	curr = st.pop();
}

void Text::addNext(string s)
{
	Node *t = new Node;
	t->str = s;
	t->next = curr->next;
	curr->down = t;
	next();
}

void Text::addDown(string s)
{
	Node *t = new Node;
	t->str = s;
	t->next = curr->down;
	curr->down = t;
	down();
}

void Text::deleteTree(Node * t)
{
	if (t == NULL) return;
	deleteTree(t->next);
	deleteTree(t->down);
	delete t;
}

void Text::deletelurr()
{
	Node *t = curr;
	back();
	if (curr->next == t) curr->next = t->next;
	if (curr->down == t) curr->down = t->next;
	t->next = NULL;
	deleteTree(t);
}

void Text::print(Node *t)
{
}


Text::~Text()
{
}
