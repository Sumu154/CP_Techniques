#include<bits/stdc++.h>
using namespace std;

/*
4 2
100 200 300 400

output -> 700

*/

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }

    int i=0, j=0;
    int sum=0, ans=0;
    while(j<n){
        sum += a[j];
        if((j-i+1)==k){
            ans = max(ans, sum);
            sum -= a[i];
            j++;
            i++;
        }
        else{
            j++;
        }
    }
    cout << ans << "\n";
}