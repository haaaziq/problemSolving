#include<bits/stdc++.h>
using namespace std;

int countSumOfTwoRepresentations2(int n, int l, int r) {
    int ways{0};
    if(l>n/2) return ways;
    while(n-r>=l && n-r<=n/2){
        ways++;
        r--;
    }
    return ways;
}

int main(){
    cout << countSumOfTwoRepresentations2(5,2,4);
    return 0;
}