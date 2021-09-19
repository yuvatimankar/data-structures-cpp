#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    set <int> s;
    int N = 0, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        int type = 0, num = 0;
        cin >> type;
        cin >> num;
        if (type == 1)
        {
            s.insert(num);
        }
        else if (type == 2)
        {
            s.erase(num);
        }
        else
        {
            set<int>::iterator itr=s.find(num);//will return last line if not found
            if (itr == s.end())
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
}

