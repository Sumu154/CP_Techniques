#include<bits/stdc++.h>
using namespace std;

#define ll long long

const ll INF = 1e18;
const ll MOD = 1e9+7;


/*
problem link -> https://leetcode.com/problems/subarray-product-less-than-k/?envType=daily-question&envId=2024-03-27

4 100
10 5 2 6

output -> 8
*/

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }

    int i=0, j=0, prod=1, ans=0;
    while(j<n){
        prod *= a[j];
        if(prod<k){
            ans += j-i+1;
        }
        else{
            while(i<j and prod>=k){
                prod /= a[i];
                i++;
            }
            if(prod < k){
                ans += j-i+1;
            }
        }
        j++;

    }
    cout << ans << "\n";
}