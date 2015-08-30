#include <iostream>
#include <string>
using namespace std;

// For example, the string a a b c c c c c a a a would become a2blc5a3.
// Runtime = O(p + k^2), where p is the size of the original string and k
// is the number of character sequence.
// aabbccddeeff - 6 character seq.
// string concatenation operates in O(n^2)
void stringCompression(string str) 
{
	string newStr = "";
	char last = str[0];
	int count = 1;

	newStr = newStr + last;

	for (int i = 1; i < str.length(); i++) 
	{
		if (str[i] == last) 
		{
			count++;
		} else {
			newStr = newStr + to_string(count);
			newStr = newStr + str[i];
			count = 1;
			last = str[i];
		}
	}

	newStr += to_string(count);

	cout << "After Compression - ";
	for (int i = 0; i < newStr.length(); i++)
		cout << newStr[i];
	cout << "\n";
}

int main () 
{
	string k = "aabcccccaaa";
	cout << "Org. - ";
	for (int i = 0; i < k.length(); i++)
		cout << k[i];
	cout << "\n";
	stringCompression(k);
}