#include<bits/stdc++.h>
using namespace std;

bool stringsRearrangement(vector<string> inputArray) {
    sort(inputArray.begin(), inputArray.end());
    // for(int i=0; i<inputArray.size(); i++){
    //     cout << inputArray[i] << " ";
    // } cout << endl;
    int count{0};
    for(int i=0; i<inputArray.size()-1; i++){
        for(int j=0; j<inputArray[i].size(); j++){
            cout << inputArray[i][j] << " " << inputArray[i+1][j] << endl;
            if(inputArray[i][j] == inputArray[i+1][j]) count++;
        }
        if(count < inputArray[0].size()-1){
            return false;
        } count = 0;
    }
    return true;
}


int main(){
    cout << stringsRearrangement({"ab", "bb", "aa"});
    return 0;
}