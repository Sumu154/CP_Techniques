/*
problem link -> https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B
*/

#include<bits/stdc++.h>
using namespace std;

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
    int ans = 0;
    while(j<m){
        while(a[i] < b[j] and i<n){
            ans++;
            i++;
        }
        cout << ans << " ";
        j++;
    }
}