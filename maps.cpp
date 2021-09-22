#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string,int>m;
    int n,type,value;
    
    string name;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>type;
        if(type==1)
        {
            cin>>name;
            cin>>value;
            m[name]=m[name]+value;
        }
        else if(type==2)
        {
            cin>>name;
            m.erase(name);
        }
        else{
            cin>>name;
            cout<<m[name]<<endl;
        }
    }
    return 0;
}
