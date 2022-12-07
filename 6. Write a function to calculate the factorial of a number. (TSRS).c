#include<stdio.h>

int factorial(int n)
{
    int i, f=1;
    for(i=1; i<=n; i++)
        f=f*i;
    return f;
}

int main()
{
  printf("The Factorial is: %d\n",factorial(7));
    return 0;
}
