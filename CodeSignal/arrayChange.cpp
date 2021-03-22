#include<bits/stdc++.h>
using namespace std;

int arrayChange(vector<int> inputArray) {
    int start;
    int moves{0};
    for(int i=1; i<inputArray.size(); i++){
        if(inputArray[i] > inputArray[i-1]) continue;
        else{
            start = inputArray[i-1]+1;
            moves += (start - inputArray[i]);
            inputArray[i] = inputArray[i-1]+1;
        }
    }
    return moves;
}