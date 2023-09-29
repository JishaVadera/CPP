#include<iostream>
using namespace std;
int main()
{
 int a[3][3]={1,2,3,4,5,6,7,8,9};
 int i,j,sum=0;
     for(int i=0; i<3; i++)
        {
           for(int j=0; j<3; j++)
             {
                 cout<<""<<a[i][j];
             }
           cout<<"\n";
         }
            for(int i=0; i<3; i++)
             {
                for(int j=0; j<3; j++)
                {
                   if(i>=j) 
                     {
                       sum+=a[i][j]; 

                     }
                }
            }
              cout<<"total:\n"<<sum;
    }