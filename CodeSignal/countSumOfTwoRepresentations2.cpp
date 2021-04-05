#include<bits/stdc++.h>
using namespace std;

int countSumOfTwoRepresentations2(int n, int l, int r) {
    if(l>n) return 0;
    int ways{0};
    if(l==r){
        if(l+r==n) return 1;
        else return 0;
    }
    while(l<r){
        for(int i=r; i>=l; i--){
            // cout << i << " " << l << endl;
            if(i+l==n){
                ways++;
            }
        }
        l++;
    }
    return ways;
}

int main(){
    cout << countSumOfTwoRepresentations2(5,2,4);
    return 0;
}