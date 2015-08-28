#include <iostream>
#include <string>
using namespace std;

// Time Complexity - O(n), where n is the lenght of the string
// Space Complexity - O(1) constant
bool isUnique(string k)
{
	// assuming unicode characters (256) allowed to be in string k
	if (k.length() > 256) return false;

	bool unicodeChar[256];
	int uniVal;

	for (int i = 0; i < k.length(); i++) 
	{
		uniVal = (int)k[i];
		if (unicodeChar[uniVal] == true)
			return false;

		unicodeChar[uniVal] = true;
	}

	return true;
}

int main () 
{
	// testing
	string k = "abcdefghijklmnop";
	if (isUnique(k))
		cout << "Test 1 abcdefghijklmnop successfull (is unique) \n";
	else 
		cout << "Test 1 abcdefghijklmnop not successfull \n";

	k = "aaaaaaaaaaa";
	if (isUnique(k))
		cout << "Test 2 aaaaaaaaaaa not successfull \n";
	else 
		cout << "Test 2 aaaaaaaaaaa successfull (not unique) \n";

	k = "abcabcabc";
	if (isUnique(k))
		cout << "Test 2 abcabcabc not successfull \n";
	else 
		cout << "Test 2 abcabcabc successfull (not unique) \n";

}