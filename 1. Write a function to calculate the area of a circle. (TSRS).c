#include<stdio.h>

float area(float Radius)
{
    return 3.14*Radius*Radius;
}

int main()
{
    int r;
    printf("Enter a Radius:\n");
    scanf("%d",&r);
    float a = area(r);

    printf("Area=%f\n\n ",a);

    return 0;
}
