#include<stdio.h>

int EvenOrOdd(int n)
{
    return (n%2==0);
}

int main()
{
    int k;
    printf("Enter a Number:\n");
    scanf("%d",&k);

    if(EvenOrOdd(k)==1)
        printf("Even");
    else
        printf("Odd");
    return 0;
}
