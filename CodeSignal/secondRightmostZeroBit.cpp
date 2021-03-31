#include<bits/stdc++.h>
using namespace std;

int secondZeroBit(int n){
    vector<string> binRepRev;
    int temp;
    while(n!=1){
        temp=n%2;
        n/=2;
        binRepRev.push_back(to_string(temp));
    }
    binRepRev.push_back("1");
    int res;
    int count{1};
    for(int i=0;i<binRepRev.size(); i++){
        if(binRepRev[i]=="0" && count==2){
            res = pow(2,i);
            break;
        }
        else if(binRepRev[i]=="0") count++;
    }
    return res;
}

int secondRightmostZeroBit(int n) {
  return secondZeroBit(n);
}


int main(){
    cout << secondRightmostZeroBit(37);
    return 0;
}