
#include<stdio.h>

int check(int digit, int num)
{

    while(num==0)
    {

        if(num%10==digit)
            return 1;
            num=num/10;
    }
    return 0;
}
int main()
{

    if(check(7,12345))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
