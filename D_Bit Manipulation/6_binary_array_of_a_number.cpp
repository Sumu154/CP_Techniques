#include<bits/stdc++.h>
using namespace std;

#define ll long long


void Solve(int num, int n)
{
    vector<int> a;
    for(int i=0 ; i<n ; i++){
        if(num&(1<<i)){
            a.push_back(1);
        }
        else{
            a.push_back(0);
        }
    }

    reverse(a.begin(), a.end());
    for(int i: a){
        cout << i << " ";
    }
}

int main()
{
    Solve(3, 3);
}