#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);



bool isPrime(ll n)
{
    if(n==1){
        return false;
    }
    for(int ll i=2 ; i*i<=n ; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

bool isPerfectSquare(ll n)
{
    ll x = sqrtl(n);
    return x*x == n;
}



void Solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }

    for(int i=0 ; i<n ; i++){
        if(isPrime(sqrtl(a[i])) and isPerfectSquare(a[i])){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    
}

int main()
{
    Faster;
    
    Solve();
    
}

