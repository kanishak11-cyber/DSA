#include <stdio.h>
//#include<bits/stdc++.h>
void fun(int n)
{
    if(n>0)
    {
        printf("%i",n);
        fun(n-1);
    }
} 
int main(){
    int x=3;
    fun(x);
    return 0;
}    