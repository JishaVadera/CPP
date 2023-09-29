#include <iostream>
using namespace std;
int main()
{
	char c;

	cout<<"enter the character:";
	cin >> c;

	if(c=='a' || c=='e' || c=='i'|| c=='o'||c=='u'||
	c=='A' || c=='E' || c=='I'|| c=='O'||c=='U')
	{
	cout<<"vowel";
	}
	else if((c>='a' && c<='z') ||(c>='A'&& c<='Z'))
	{
		cout<<"constent";
	}
	else
	{
		cout<<"caution!! please enter alphabet";
	}
    return 0;
}




