#include <iostream>
#include <string>
using namespace std;

void reverse(char *str)
{
	char *end = str;
	char temp;

	if (str) 
	{
		// go all the way to the end of the string
		// to find the null character
		while (*end) 
			end++;
		end--;

		// swap characters until pointers meet in the center
		while (str < end) 
		{
			temp = *str;
			*str = *end;
			*end = temp;
			str++;
			end--;
		}
	}
}

int main () 
{
	// testing
	char k[] = "abcdefghij\0";
	cout << "Org. ";
	for (int i = 0; i < 11; i++)
		cout << k[i];
	cout << endl;

	reverse(k);
	
	cout << "Reverse. ";
	for (int i = 0; i < 11; i++)
		cout << k[i];
	cout << endl;
}