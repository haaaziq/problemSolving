#include<bits/stdc++.h>
using namespace std;

vector<int> arrayReplace(vector<int> inputArray, int elemToReplace, int substitutionElem) {
    for(int i=0; i<inputArray.size(); i++){
        if(inputArray[i]==elemToReplace) inputArray[i]=substitutionElem;
    }
    for(int i=0; i<inputArray.size(); i++){
        cout << inputArray[i] << " ";
    }
    return inputArray;
}

int main(){
    arrayReplace({1,2,1}, 1, 3);
    return 0;
}