#include "Text.h"



Text::Text()
{
	h = new Node;
	curr = h;
	h->down = NULL;
	h->next = NULL;
	h->str = "Part 1.";
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
	curr->next = t;
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

void Text::edit( string t)
{
	curr->str = t;
}

string Text::print(Node * t)
{
	if (t == NULL) return "";
	string s = t->str;
	s += print(t->down);
	s += print(t->next);
	return s;
}


string& Text::printcurr()
{
	return curr->str;
}

string Text::printall()
{
	string s=print(h);
	return s;
}


Text::~Text()
{
}
