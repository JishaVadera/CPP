#include <iostream>
using namespace std;
int main()
{
	int n,r,s=0,c;

	cout <<"enter number";
	cin >> n;
	 c=n;
	while(n>0)
	{
		r=n%10;
	       s=r+(s*10);
		n=n/10;
	}
		if(c==s)
		{
			cout <<"pelitron" ;
		}
		else
		{
			cout<<"not pelitron";
		}
	return 0;
}