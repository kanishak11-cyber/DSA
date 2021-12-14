#include<stdio.h>
void main()
{
    int a,b,temp,i;
    printf("A \t B \t A.B \t A+B \t A'\n");
    for(i=0;i<4;i++)
    {
        a=i&1;
        b=i>>1&1;
        temp=a&b;
        printf("%d \t %d \t %d \t %d \t %d\n",a,b,temp,a||b,a^1);
    }
}