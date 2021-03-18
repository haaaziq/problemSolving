#include<bits/stdc++.h>
using namespace std;

int lateRide(int n) {
    int j{0}, hrs{0}, mins{0};
    for(int i=0; i<=24; i++){
        j = i*60;
        if(j > n){
            hrs = i-1;
            mins = n - (hrs*60);
            break;
        }
    }
    // cout << hrs << " " << mins << endl;
    int sum{0};
    for(int i=0; i<2; i++){
        sum += hrs%10;
        hrs /= 10;
        sum += mins%10;
        mins /= 10;
    }
    return sum;
}

int main(){
    cout << lateRide(808);
    return 0;
}