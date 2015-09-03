#include <iostream>
#include "node.h"
using namespace std;

int main () 
{
	node *a = new node;
	a->setData(1);
	
	node *b = new node;
	b->setData(2);

	a->setLink(b);
	b->setLink(NULL);

	cout << a->getData() << endl;

	return 0;
}