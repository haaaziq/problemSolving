#include<bits/stdc++.h>
using namespace std;

bool stringsRearrangement(vector<string> inputArray) {
    int n = inputArray.size();
    int count{0}, fcount{0};
    sort(inputArray.begin(), inputArray.end());
    do{
        for(int i=0;i<n-1;i++){
            // cout << inputArray[i] << " " << inputArray[i+1] << endl;
            for(int j=0; j<inputArray[i].size(); j++){
                // cout << inputArray[i][j] << " " << inputArray[i+1][j] << endl;
                if(inputArray[i][j] == inputArray[i+1][j]) count++;
            }
            if(count==inputArray[0].size()-1){
                fcount++;
            }
            count = 0; 
        }    
        // cout << "fcount: " << fcount << endl;
        if(fcount==inputArray.size()-1) return true;
        fcount=0;
    } while (next_permutation(inputArray.begin(), inputArray.end()));

    return false;
}


int main(){
    cout << stringsRearrangement({"aba", "bbb", "bab"});
    return 0;
}