#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int C;
    cin >> C;

    int length = log2(C) + 1;

    // A = 2^(length-1) -1
    long long int A = (1<<(length-1)) - 1;
    
    long long int B = A^C;
    // cout << A << " & " << B << endl;
    cout << A*B << endl;

    return 0;
}