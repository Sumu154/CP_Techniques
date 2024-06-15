#include<bits/stdc++.h>
using namespace std;

void allPossibleSubset(vector<int> a, int n)
{
    for(int i=0 ; i<(1<<n) ; i++){
        for(int j=0 ; j<n ; j++){
            if(i & (1<<j)){        //binary represent gular kon kon bit 1 oi bit gular corresponding value print korbo
                cout << a[j] << " ";
            }
        }
        cout << "\n";
    }
}

int main()
{
    vector<int> a = {2, 5, 3};
    allPossibleSubset(a, 3);
}