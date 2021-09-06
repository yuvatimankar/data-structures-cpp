//mini-max sum in array
//input 1 2 3 4 5
//output 10 14 
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    int val;
    long long int sum=0;
    vector<int>arr;
    for(int i=0;i<5;i++)
    {
        cin>>val;
        sum+=val;
        arr.push_back(val);
    }
    sort(arr.begin(),arr.end());

    cout<<sum-arr[4]<<" "<<sum-arr[0]<<endl;
    return 0;
}