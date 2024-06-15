#include<bits/stdc++.h>
using namespace std;

#define ll long long

/*
time complexity:
       O(nlogn) -> upper bound niye
       O(nlog(logn))  -> actual complexity 
*/


int main()
{
    int n;
    cin >> n;
    vector<bool> prime(n+1, true);
    for(int i=2 ; i*i<=n ; i++){
        if(prime[i]){
            for(int j=2*i ; j<=n ; j+=i){
                prime[j] = false;
            }
        }
    }

    for(int i=2 ; i<=n ; i++){
        if(prime[i]){
            cout << i << " ";
        }
    }cout << "\n";

}

