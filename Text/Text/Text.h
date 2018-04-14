#pragma once
#include <Stack.h>

using namespace std;

class Text
{
	Node *h;
	Node *curr;
	Stack st;
public:
	Text();
	~Text();
	void down();
	void next();
	void back();
	void addNext(string s);
	void addDown(string s);
	void deleteTree(Node *t);
	void deletelurr();
	void print(Node *t);

};

