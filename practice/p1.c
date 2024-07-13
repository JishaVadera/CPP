#include<stdio.h>
int main()
{
    int a,b,temp;
    int num[]={10,20,30,40,50};
    temp = a;
    a = b;
    b = temp;
    for (int i = 0; i < 9; i++)
    {
        if (i>=a)
        {
            arry[i] = arry[i+1];
        }
        printf("%d \t",arry[i]);
    }
}