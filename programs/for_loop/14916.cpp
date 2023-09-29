#include<iostream>
using namespace std;

int main()
{
	int i,n,a=0;

	cout <<"enter value";
	cin >> n;

	for(i=1 ; i<=n ;i++)
	{
		a=i*i;
		cout << a <<',';
	}
	return 0;

}

