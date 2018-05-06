#pragma once
#include <iostream>
#include <Stack.h>
#include <Text.h>

int main()
{
	string t = "Part 1.";
	Text l;
	l.addDown("Opredelenie.");
	l.back();
	l.addNext("Part 2.");
	l.addDown("Opredelenie 2.");
	string g = l.printall();
	cout << g << endl;
	system("pause");
	return 0;
}