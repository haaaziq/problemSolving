#include<bits/stdc++.h>
using namespace std;

int phoneCall(int min1, int min2_10, int min11, int s) {
    int durationMins{0};
    if(s-min1 < 0){
        return 0;
    } else{
        s = s-min1;
        durationMins = durationMins + 1;        
    }
    int temp=0;
    for(int i=9; i>=1; i--){
        if(i*min2_10 <= s){
            if(i==9) temp=1;
            s = s-(i*min2_10);
            durationMins += i;
            break;
        }
    }
    if(temp == 1)
        durationMins = durationMins + (s/min11);
    
    return durationMins;
}