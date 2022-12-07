#include<stdio.h>

float simpleIntrest(float P, float R, float T)
{
    return (P*R*T)/100;
}

int main()
{
    float x,y,z;
    printf("Enter A Number:\n");
    scanf("%f %f %f",&x,&y,&z);
    float k = simpleIntrest(x,y,z);
    printf("SI:%f\n\n",k);
    return 0;
}

