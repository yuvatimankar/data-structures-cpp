// Function Description
// complete the function birthdayCakeCandles in the editor below.

// birthdayCakeCandles has the following parameter(s):

// int candles[n]: the candle heights

// Returns
// int: the number of candles that are tallest

// Input Format
// The first line contains a single integer, n, the size of candles[] .
// The second line contains n  space-separated integers, where each integer i  describes the height of candles.
// 4
// 3 2 1 3 

// output
// 2

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    int max=0;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    sort(a.begin(),a.end());
    max=a[n-1];
    for(int i=0;i<n;i++)
    {   
        if(max==a[i])
        {
            count+=1;
            
        
        }
        
            
    }
    
    cout<<count<<endl;
    
    return 0;
    
 
}   