//lower bound stl
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,num;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        v.push_back(num);
    }
    
    int q;
    cin>>q;
   
    for(int i=0;i<q;i++)
    {
        int num;
        cin>>num;
        vector<int>::iterator it;
        it=lower_bound(v.begin(),v.end(),num);
        if (*(it + 1) == num|| *it == num)
            cout << "Yes " << it - v.begin() + 1 << endl;
        else
            cout << "No " << it - v.begin() + 1 << endl;
    }
    return 0;
}