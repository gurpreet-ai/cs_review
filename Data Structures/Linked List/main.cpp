#include <iostream>
#include "node.h"
using namespace std;

int main () 
{
	node *a = new node;
	list_head_insert(a, 10);
	
	node *b = new node;
	list_insert(b, 20);

	return 0;
}