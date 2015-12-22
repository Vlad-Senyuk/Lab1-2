#include <iostream>
#include "class.h"
using namespace std;

mnozhestvo::mnozhestvo()
{
	cout << "Constructor without parametrs" << endl;

	mn = new int [maxsize];

	for (int i = 0; i < maxsize; i++)
	{
		mn[i] = rand() % 20-5;
	}
		tsize = maxsize;
	
}

mnozhestvo::mnozhestvo(int v)
{
	cout << "Constructor with parametrs" << endl;

	mn = new int [maxsize];

	for (int i = 0; i < maxsize; i++)
	{
		mn[i] = rand() % 20 - 3;
	}
		tsize = v;
}

mnozhestvo::mnozhestvo(const mnozhestvo& m)
{
	cout << "Constructor with copy" << endl;

	mn = new int [maxsize];

		tsize = m.tsize;


	for (int i = 0; i < maxsize; i++)
	{
		mn[i] = m.mn[i];
	}
}

mnozhestvo::~mnozhestvo()
{
	cout << "Destructor" << endl;
	delete[] mn;
}

int mnozhestvo::getsize()
{
	return (tsize);
}

void mnozhestvo::output1()
{
	for (int i = 0; i < tsize; i++)
	{
		cout << mn[i] << " ";
	}

}

void mnozhestvo::output2()
{
	for (int i = tsize-1; i >-1; --i)
	{
		cout << mn[i] << " ";
	}
}

void mnozhestvo::setsize(int j)
{
	tsize = j;

	for (int i = 0; i < j; i++)
	{
		if (i >= maxsize)
		{
			mn[i] = rand() % 20;
		}
	}


	for (int i = 0; i < j; i++)
	{
		cout << mn[i] << " ";
	}
}

int mnozhestvo::sum()
{
	int g = 0;

	for (int i = 0; i < tsize; i++)
	{
		g += mn[i];
	}

	return g;
}

void mnozhestvo::negative()
{
	cout << "Negative elements" << endl;
	
	int f = 0;

	for (int i = 0; i < tsize; i++)
	{
		if (mn[i] < 0)
		{
			f++;
		}
	}

	if (f > 0)
	{
		for (int i = 0; i < tsize; i++)
		{
			cout << mn[i] << " ";
		}
	}

}
