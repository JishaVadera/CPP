#include<iostream>
using namespace std;

int main()
{
	int i,sum;

	for(i=65 ; i<=90 ; i+=2)
	{
	   if(i%4!=1)
	   {
		cout<< (char)(i+32) <<',';
	   }
	   else
	   {
		cout<< (char)i<<',';
	   }
	}
	return 0;
}