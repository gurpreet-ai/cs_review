#include <iostream>
#include <string>
using namespace std;

bool permutation2(string i, string j) 
{
	if (i.length() != j.length()) 
		return false;

	// assuming size of character set to be 256
	int alphaCount[256];
	int uniVal;

	for (int a = 0; a < i.length(); a++)
	{
		uniVal = (int)i[a];
		alphaCount[uniVal]++;
	}

	for (int a = 0; a < j.length(); a++)
	{
		uniVal = (int)j[a];
		if (alphaCount[uniVal]-- < 0)
			return false;
	}

	return true;

}

// Not very Efficient Algorithm
// input - two strings, i and j
// output - true if one is the permutation of the other, else false
bool permutation1(string i, string j) 
{
	if (i.length() != j.length()) 
		return false;

	std::sort(i.begin(), i.end());
	std::sort(j.begin(), j.end());

	if (i == j)
		return true;
	else 
		return false;
}

int main () 
{
	string i = "dog";
	string j = "god";

	if (permutation2(i, j))
		cout << "Test 1 Program Successfull \n";
	else
		cout << "Test 1 Program Unsuccessfull \n";

	i = "dog    ";
	if (!permutation2(i, j))
		cout << "Test 2 Program Successfull \n";
	else 
		cout << "Test 2 Program Unsuccessfull \n";

	i = "qwerty";
	j = "wtqery";

	if (permutation2(i, j))
		cout << "Test 3 Program Successfull \n";
	else 
		cout << "Test 3 Program Unsuccessfull \n";


}