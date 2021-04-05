#include<bits/stdc++.h>
using namespace std;

int digitDegree(int n) {
    if(n < 10) return 0;
    int digits = log10(n)+1;
    int temp{0};
    for(int i=0; i<digits; i++){
        temp += n%10;
        n/=10;
    }
    return(1 + digitDegree(temp));
}

int main(){
    cout << digitDegree(579);
    return 0;
}