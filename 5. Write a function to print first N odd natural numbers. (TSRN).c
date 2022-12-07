#include<stdio.h>

void printNnaturalno(int n)
{
    int i;
    for(i=1; i<=n; i=i+2)
        printf("%d\n",i);

}
 int main()
 {
   printNnaturalno(100);
 }
