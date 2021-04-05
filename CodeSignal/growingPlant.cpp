#include<bits/stdc++.h>
using namespace std;

int growingPlant(int upSpeed, int downSpeed, int desiredHeight) {
    int days{0};
    int height{0};
    while(height<desiredHeight){
        days++;
        height+=upSpeed;
        if(height>=desiredHeight) return days;
        height-=downSpeed;
    }
    return days;
}

int main(){
    cout << growingPlant(6,5,10);
    return 0;
}