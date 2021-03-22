#include<bits/stdc++.h>
using namespace std;

bool palindromeRearranging(string inputString) {
    map<char, int> countMp;
    if(inputString.length() == 1) return true;
    for(int i=0; i<inputString.length(); i++){
        countMp[inputString[i]]++;
    }
    int flag=1;
    int countOdd{0};
    for(auto i=countMp.begin(); i!=countMp.end(); i++){
        if(i->second % 2 != 0){
            flag=0;
            countOdd++;
            // break;
        }
    }
    if(flag == 1 || (flag==0 && countOdd==1))
        return true;
    else return false;
}

int main(){
    cout << palindromeRearranging("adbbccad");
    return 0;
}
