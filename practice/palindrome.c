#include<stdio.h>
int main()
{
    int n,sum=0,temp,r;
    printf("Enter number: ");
    scanf("%d",&n);
    temp = n;
    while (n>0)
    {
        r = n%10;
        sum = (sum*10)+r;
        n=n/10;
    }
    if (temp == sum)
    {
        printf("it is palindrome number");
    }
    else
    {
        printf("it is not palindrome number");
    }
    return 0;
}