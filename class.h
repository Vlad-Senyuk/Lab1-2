#pragma once
#include <iostream>

class mnozhestvo
{
	int *mn;
	int tsize;
	static const int maxsize=10;
public:
	mnozhestvo();
	mnozhestvo(int v);
	mnozhestvo(const mnozhestvo&);
	~mnozhestvo();
	void setsize(int);
	int getsize();
	void output1();
	void output2();
	int sum();
	void negative();
};
