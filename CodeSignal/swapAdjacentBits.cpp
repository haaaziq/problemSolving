#include<bits/stdc++.h>
using namespace std;

int swapBits(int n){
    vector<string> binRepRev;
    int temp;
    while(n!=1){
        temp=n%2;
        n/=2;
        binRepRev.push_back(to_string(temp));
    }
    binRepRev.push_back("1");
    int res{0};
    
    if(binRepRev.size()%2!=0) binRepRev.push_back("0");
    // cout << "Before:" << endl;
    // for(int i=0;i<binRepRev.size(); i++){
    //     cout << binRepRev[i] << " ";
    // } cout << endl;
    string flag;
    for(int i=0;i<binRepRev.size(); i=i+2){
        flag = binRepRev[i];
        binRepRev[i] = binRepRev[i+1];
        binRepRev[i+1] = flag;
    }
    // cout << "\nAfter:" << endl;
    for(int i=0;i<binRepRev.size(); i++){
        if(binRepRev[i]=="1"){
            res+=pow(2,i);
        }
    }
    return res;
}

int swapAdjacentBits(int n) {
  return n==0 ? 0 : swapBits(n);
}


int main(){
    cout << swapAdjacentBits(74);
    return 0;
}