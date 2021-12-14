#include <stdio.h>
//iterative function
int fib(int n)
{
    int t0=0,t1=1,s,i;
    if(n<=1) return n;
    for(i=2;i<=n;i++){
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}

//recursive function for fibonacci
int F[10];
int rfib(int n){
    if(n<=1) return n;
    return rfib(n-2)+rfib(n-1);
}
int mfib(int n){
    if(n<=1) 
    {
        F[n]=n;
        return n;
    }
    else
    {
        if(F[n-2]==-1)
            F[n-2]=mfib(n-2);
        if(F[n-1]==-1)
            F[n-1]=mfib(n-1);
        
        return F[n-2]+F[n-1];
    }
}

int main(){
    for(int i=0;i<10;i++){
        F[i]=-1;
    }
    printf("%i \n",mfib(6));
    return 0;
}

