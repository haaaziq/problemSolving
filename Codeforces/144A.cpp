// Arrival of the General
#include<iostream>
using namespace std;

int main(){
    int n, minm, maxm;
    cin >> n;

    int height[n];
    for(int i=0; i<n; i++){
        cin >> height[i];
    }

    minm = height[0];
    maxm = height[0];
    int imin{0}, imax{0};

    for(int i=1; i<n; i++){
        if(height[i] <= minm){
            minm = height[i];
            imin = i;
        }
        else if(height[i] > maxm){
            maxm = height[i];
        }
    }

    for(int i=0; i<n; i++){
        if(height[i] == maxm){
            imax = i;
            break;
        }
    }

    // cout << minm << endl;
    // cout << maxm << endl;
    // cout << imin << endl;
    // cout << imax << endl;

    int time{0};
    if(imax > imin){
        time = (imax + (n-1-imin) - 1);
    } else{
        time = (imax + (n-1-imin));
    }

    cout << time;
    
    return 0;
}