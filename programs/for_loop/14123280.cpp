#include<iostream>
using namespace std;

int main()
{

	int i,a=1,n=1;

	cout <<"enter n value: ";
	cin >> n;

	for(i=1 ; i<=n ; i++)
	{
		cout <<i*a <<',';
		a=a*2;
	}
    return 0;
}
