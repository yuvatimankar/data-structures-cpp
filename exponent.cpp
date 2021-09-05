//exponent using recursion
#include<iostream>
using namespace std;

int pow(int m,int n)
{
    if(n==0)
        return 1;
    else 
        return pow(m,n-1) * m;
}

//another approach
int power(int m,int n)
{
    if(n==0)
        return 1;
    if(n%2==0)
        return power(m*m,n/2);
    else
        return m*power(m*m,(n-1)/2);
}
int main()
{
    int m,n;
    cin>>m>>n;

    int ans,ans1;
    ans=pow(m,n);
    cout<<ans<<endl;
    ans1=power(m,n);
    cout<<ans1<<endl;


    return 0;
}