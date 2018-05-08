#pragma once
#include <iostream>
#include <Stack.h>
#include <TText.h>

int main()
{
	string t = "Part 1";
	TText l;
	int k = 0;
	l.addDown("Opredelenie");
	l.back();
	l.addNext("Part 2");
	l.addDown("Opredelenie 2");
	l.back();
	l.addNext("Part 3");
	l.addNext("Part 4");
	l.addDown("Opredelenie 3");
	l.addNext("Opredelenie 4");
	l.addDown("Something");
	l.addNext("something 1");
	l.addNext("something 1");
	l.back();
	l.back();
	l.back();
	l.deletelurr();
	l.addNext("something 1");
	Node *j = l.getcurrent();
	k = j->lvl;
	cout << "2: " << k << endl;
	l.addDown("Something");
	j = l.getcurrent();
	k = j->lvl;
	cout << "3: " << k << endl;
	l.addDown("Something");
	j = l.getcurrent();
	k = j->lvl;
	cout << "4: " << k << endl;
	l.addDown("Something");
    j = l.getcurrent();
	k = j->lvl;
	cout << "5: " << k << endl;
	l.addDown("Something");
	j = l.getcurrent();
	k = j->lvl;
	cout << "6: " << k << endl;
	l.addDown("Something");
	j = l.getcurrent();
	k = j->lvl;
	cout << "7: " << k << endl;
	string g = l.printall();
	cout << g << endl;
	system("pause");
	return 0;
}