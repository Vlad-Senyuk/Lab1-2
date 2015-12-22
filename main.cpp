#include <iostream>
#include "class.h"
using namespace std;

void main()
{
	cout << endl;
	mnozhestvo *a = new mnozhestvo();
	a->output1();
	cout << endl;
	a->output2();
	cout << endl;
	mnozhestvo *b=new mnozhestvo(9);
	b->output1();
	cout << endl;
	b->output2();
	cout << endl;
	mnozhestvo *c=new mnozhestvo(*a);
	c->output1();
	cout << endl;
	c->output2();
	cout << endl;
	a->setsize(12);
	cout << endl;
	a->setsize(7);
	cout << endl;
	cout << endl;
	if (a->sum() > b->sum())
	{
		a->output1();
	}
	else
	{
		b->output1();
	}
	cout << endl;
	a->negative();
	cout << endl;
	b->negative();
	cout << endl;
	if (a->getsize() == b->getsize())
	{
		a->output1();
		b->output2();
	}
}
