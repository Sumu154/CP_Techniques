#include<bits/stdc++.h>
using namespace std;

#define ll long long

/*
problem link -> https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/C

7 20
2 6 4 3 6 8 9

output -> 19
*/

int main()
{
    int n;
    ll s;
    cin >> n >> s;
    vector<ll> a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }

    int i=0, j=0;
    ll sum=0, ans=0;
    while(j<n){
        sum += a[j];
        if(sum <= s){
            ans += j-i+1;
        }
        else{
            while(sum>s and i<j){
                sum -= a[i];
                i++;
            }
            if(sum <= s){
                ans += j-i+1;
            }
        }
        j++;
    }
    cout << ans << "\n";
}