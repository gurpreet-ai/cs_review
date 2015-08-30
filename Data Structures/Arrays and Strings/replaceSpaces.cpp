#include <iostream>
#include <string>
using namespace std;

// input - "h e l l o"
// output - "h%20e%20l%20l%20o"
void replaceSpaces(char *k, int length) 
{
	int spaceCount = 0;
	int newlength = 0;

	for (int i = 0; i < length; i++)
	{
		if (k[i] == ' ')
			spaceCount++;
	}

	if (spaceCount == 0)
		return;

	// cout << "spaceCount " << spaceCount << endl;

	// replace ' ' with '%20'
	newlength = length + (spaceCount * 2);
	k[newlength] = '\0';

	for (int i = length - 1; i >= 0; i--) 
	{
		if (k[i] == ' ') 
		{
			k[newlength - 1] = '0';
			k[newlength - 2] = '2';
			k[newlength - 3] = '%';
			newlength = newlength - 3;
		} else 
		{
			k[newlength - 1] = k[i];
			newlength = newlength - 1;
		}
	}
}

int main ()
{
	char str[100] = " aa bb cc !";
	cout << "Input: " << str << endl;
	replaceSpaces(str, 9);
	cout << "Output: " << str << endl;

}