#include<iostream>
using namespace std;
char reverse()
{
  char a[30],j,i;

  cout<<"enter name:";
  cin>>a;
  for(i=0; a[i]!='\0'; i++){}
  for(j=i; j>=0; j--)
  {
      cout<<""<<a[j];
  }
  return 0;
}
int main()
{
   char a[30];
   int i,j;


   a[j]=reverse();
}