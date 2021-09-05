//fibonacci using recursion
#include<iostream>

using namespace std;
//recursive function
int fib(int n)
{
    if(n<=1)
        return n;
    else
        return fib(n-2)+ fib(n-1);
}

//Memoization function

int F[10];
int fibonacci(int n)
{
    if(n<=1)
    {
        F[n]=n;
        return n ;
    }

    else 
        if(F[n-2]== -1)
            F[n-2]=fibonacci(n-2);
        if(F[n-1]== -1)
            F[n-1]= fibonacci(n-1);
    return F[n-2] + F[n-1];
}

int main()
{
    int n;
    cin>>n;
    int i;
    for(i=0;i<10;i++)
        F[i]= -1;

    int ans,ans1;
    ans=fib(n);
    ans1=fibonacci(n);

    cout<<ans<<endl;
    cout<<ans1<<endl;

    return 0;
}