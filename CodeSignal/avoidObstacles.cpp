#include<bits/stdc++.h>
using namespace std;

// Minimum Uncommon Factor
int avoidObstacles(vector<int> inputArray){
    sort(inputArray.begin(), inputArray.end());
    int temp{0};
    int res;
    for(int i=2; i<=10000; i++){
        for(int j=0; j<inputArray.size(); j++){
            if(inputArray[j]%i==0){
                temp=0;
            } else temp++;
        }
        if(temp==inputArray.size()){
            res = i;
            break;
        }
        temp=0;
    }
    return res;
}

int main(){
    // 1 2 4 6 10
    vector<int> i = {1,2,3,4,5,6,7,9,10,11,12};
    cout << avoidObstacles(i);

    return 0;
}