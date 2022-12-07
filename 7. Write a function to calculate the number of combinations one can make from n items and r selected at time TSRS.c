#include<stdio.h>

int fact(int n)
{
    int i, f=1;
    for(i=1; i<=n; i++)
        f=f*i;
    return f;
}

int comb(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}

int main()
{
    printf("The Combination is: %d\n\n",comb(10,3));

    return 0;
}
