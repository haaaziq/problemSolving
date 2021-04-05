#include<bits/stdc++.h>
using namespace std;

int arrayMaxConsecutiveSum(vector<int> inputArray, int k) {
    int maxSum{0}, temp{0};
    for(int i=0; i<inputArray.size()-k+1; i++){
        for(int j=i; j<k+i; j++){
            temp+=inputArray[j];
            cout << inputArray[j] << " ";
        }
        cout << endl;
        if(maxSum < temp) maxSum=temp;
        temp=0;
    }
    return maxSum;
}

int main(){
    cout << arrayMaxConsecutiveSum({2, 3, 5, 1, 6}, 2);
    return 0;
}