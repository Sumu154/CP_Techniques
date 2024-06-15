/*
https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }
    for(int i=0 ; i<m ; i++){
        cin >> b[i];
    }

    int i=0, j=0;
    ll ans = 0;
    //a er i ke fixed dhore b er j ke traverse korteci
    while(i<n and j<m){
        ll cnt1=0, cnt2=0;
        int curr = a[i];
        while(a[i]==curr and i<n){
            cnt1++;
            i++;
        }
        while(b[j]<curr and j<m){
            j++;
        }
        while(b[j]==curr and j<m){
            cnt2++;
            j++;
        }
        ans += (cnt1*cnt2);
    }

    cout << ans << "\n";
}