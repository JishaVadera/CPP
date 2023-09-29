#include<iostream>
using namespace std;

int main()
{
	int i,n,sum=1;
	cout <<"enter value" <<endl;
	cin >> n;

	for(i=1 ; i<=n ;++i)
	{
		cout << sum <<',';
		sum=sum*2;
	}
	return 0;
}