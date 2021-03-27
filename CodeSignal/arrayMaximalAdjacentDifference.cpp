#include<bits/stdc++.h>
using namespace std;

int arrayMaximalAdjacentDifference(vector<int> inputArray){
    if(inputArray.size() <= 1) return 0;
    int maxDiff = inputArray[1] - inputArray[0];
    
    for(int i=2; i<inputArray.size(); i++){
        if(maxDiff < abs(inputArray[i]-inputArray[i-1]))
            maxDiff = abs(inputArray[i]-inputArray[i-1]);
    }
    return maxDiff;
}