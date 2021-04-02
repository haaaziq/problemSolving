#include<bits/stdc++.h>
using namespace std;

int drb(int n, int m){
    vector<string> binRepI, binRepII;
    int temp{0};
    if(n==0)
        binRepI.push_back("0");
    else{
        while(n!=1 && n>=1){
            temp=n%2;
            n/=2;
            binRepI.push_back(to_string(temp));
        }
        binRepI.push_back("1");
    }

    if(m==0)
        binRepII.push_back("0");
    else{
        while(m!=1 && n>=1){
            temp=m%2;
            m/=2;
            binRepII.push_back(to_string(temp));
        }
        binRepII.push_back("1");
    }

    while(binRepI.size() != binRepII.size()){
        if(binRepI.size() < binRepII.size()) binRepI.push_back("0");
        else binRepII.push_back("0");
    }
    int res{0};
    for(int i=0; i<binRepI.size(); i++){
        if(binRepI[i] != binRepII[i]){
            res = pow(2,i);
            break;
        }
    }

    // for(int i=0; i<binRepI.size(); i++){
    //     cout << binRepI[i] << " ";
    // } cout << endl;
    // for(int i=0; i<binRepII.size(); i++){
    //     cout << binRepII[i] << " ";
    // } cout << endl;

    return res;
}

int differentRightmostBit(int n, int m) {
  return drb(n,m);
}

int main(){
    cout << differentRightmostBit(1,0);
    return 0;
}