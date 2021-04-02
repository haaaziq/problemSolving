#include<bits/stdc++.h>
using namespace std;

int depositProfit(int deposit, int rate, int threshold) {
    int ans{0};
    float increment = float(rate);
    float dep = float(deposit);
    while(dep<threshold){
        dep = dep + increment/100*dep;
        // cout << deposit << endl;
        ans++;
    }
    return ans;
}

int main(){
    cout << depositProfit(100,20,170);
    return 0;
}