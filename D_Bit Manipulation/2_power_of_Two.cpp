#include<bits/stdc++.h>
using namespace std;

int isPOwerofTwo(int n)
{
    if(n==0){
        return 0;
    }
    return !(n & n-1);
}


int main()
{
    cout << isPOwerofTwo(8) << "\n";
}