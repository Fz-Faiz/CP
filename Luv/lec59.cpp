#include<bits/stdc++.h>
using namespace std;

void printBinary(int num) {
    for(int i = 10 ; i >= 0 ; i--){
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int main() {
    printBinary(9);
    int a = 9;
    int i = 3;
    if((a & (1<<i)) != 0){
        cout << "set";
    }else{
        cout << "not set";
    }

    // bit set
    printBinary(a | (1<<i));
    // bit unset
    printBinary(a & (~(1<<i)));
    // toggle
    printBinary(a ^ (1<<i));
    // count
    cout << __builtin_popcount(a);
    // divide by 2
    cout << (a>>1);
    // multiple by 2
    cout << (a<<1);
    // Uppercase to Lowercase
    cout << char('B' | ' ');
    // Lowercase to Uppercase
    cout << char('b' | '_');
    // check power of 2
    cout <<  (a & (a-1));
}