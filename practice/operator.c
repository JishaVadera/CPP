#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter number of a: ");
    scanf("%d",&a);

    printf("Enter number of b: ");
    scanf("%d",&b);
    
    printf("Enter number of c: ");
    scanf("%d",&c);

    (a>b)?(a > c ? printf("A is big") : printf("C is big")):(b > c ? printf("B is big"): printf("C is big"));
}