#include <iostream>
using namespace std;

int main()
{
	int i, j;

	for (i = 65; i <= 69; i++)
	{
		for (j = i; j >= 65; j--)
		{
			cout << (char)j << " ";
		}
		cout << endl;
	}
	return 0;
}