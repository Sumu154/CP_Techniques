#include<bits/stdc++.h>
using namespace std;


int getBit(int n, int pos)
{
    if((n&(1<<pos))!=0){
        return 1;
    }
    return 0;
}

//pos e 1 bit set kora
int setBit(int n, int pos)
{
    return n | (1<<pos);
}


//pos e 0 bit set kora
int clearBit(int n, int pos)
{
    int mask = ~(1<<pos);  //kon digiter corresponding 0 or 1 ante hbe
    return n&mask;
}

//0 or 1 e update
int updateBit(int n, int pos, int newN)
{
    if(newN==1){
        return setBit(n, pos);
    }
    else{
        return clearBit(n, pos);
    }
}

//0 thakle 1, 1 thakle 0
int toggleeBit(int n, int pos)
{
    return n^(1<<pos);
}

int main()
{
    //getBit
    cout << getBit(5, 2) << "\n";
    cout << setBit(5, 1) << "\n";
    cout << clearBit(5, 2) << "\n";
    cout << updateBit(5, 1, 1) << "\n";
    cout << toggleeBit(44, 3) << "\n";
}