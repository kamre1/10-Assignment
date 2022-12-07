#include<stdio>

void primCheck(int n)
{
    int i=2;
    for(i=2; i<=n; i++)

      while(n%i==0)
    {
        printf("%d",i);
        n=n/i;
    }
}

int main()
{
    primeCheck(36);

    return 0;
}
