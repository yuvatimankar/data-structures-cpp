#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp;
    int digit;
    int rev=0;
    temp=n;
    while(n>0)
    {
        digit=n%10;
        rev=(rev*10)+digit;
        n=n/10;
    }
    if(temp==rev)
    {
        cout<<"palindrome"<<endl;

    }
    else{
        cout<<"not"<<endl;
    }
}