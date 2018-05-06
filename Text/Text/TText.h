#pragma once
#include <Stack.h>

using namespace std;

class TText
{
	Node *h;
	Node *curr;
	Stack st;
public:
	TText();
	~TText();
	void down();
	void next();
	void back();
	void addNext(string s);
	void addDown(string s);
	void deleteTree(Node *t);
	void deletelurr();
	void edit(string t);
	string print(Node *t);
	string& printcurr();
	string printall();
};

