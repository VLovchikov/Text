#include "TText.h"



TText::TText()
{
	h = new Node;
	curr = h;
	h->down = NULL;
	h->next = NULL;
	h->str = "Start Text";
	h->lvl = 1;
}

void TText::down()
{
	if (curr->down == NULL) throw - 2;
	st.push(curr);
	curr = curr->down;
}

void TText::next()
{
	if (curr->next == NULL) throw - 2;
	st.push(curr);
	curr = curr->next;
}

void TText::back()
{
	if (st.isEmpty()) throw - 3;
	curr = st.pop();
}

void TText::addNext(string s)
{
	Node *t = new Node;
	t->str = s;
	t->next = curr->next;
	t->lvl = curr->lvl;
	curr->next = t;
	next();
}

void TText::addDown(string s)
{
	Node *t = new Node;
	t->str = s;
	t->next = curr->down;
	t->lvl = curr->lvl + 1;
	curr->down = t;
	down();
}

void TText::deleteTree(Node * t)
{
	if (t == NULL) return;
	deleteTree(t->next);
	deleteTree(t->down);
	delete t;
}

void TText::deletelurr()
{
	Node *t = curr;
	back();
	if (curr->next == t) curr->next = t->next;
	if (curr->down == t) curr->down = t->next;
	t->next = NULL;
	deleteTree(t);
}

void TText::edit( string t)
{
	curr->str = t;
}

Node * TText::gethead()
{
	return h;
}

Node* TText::getcurrent()
{
	return curr;
}

string TText::print(Node * t)
{
	if (t == NULL) return "";
	string s="";
	for (int i = 0; i < t->lvl; i++)
	{
		s = " " + s;
	}
	s +=t->str;
	s +='\n';
	s += print(t->down);
	s += print(t->next);
	return s;
}


string& TText::printcurr()
{
	return curr->str;
}

string TText::printall()
{
	string s=print(h);
	return s;
}


TText::~TText()
{
}
