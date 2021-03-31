#include<bits/stdc++.h>
using namespace std;

int mirrorBits(int a) {
    vector<string> binRepRev;
    int temp;
    while(a!=1){
        temp=a%2;
        a/=2;
        binRepRev.push_back(to_string(temp));
    }
    binRepRev.push_back("1");
    reverse(binRepRev.begin(), binRepRev.end());
    int revNum{0};
    for(int i=0; i<binRepRev.size(); i++){
        if(binRepRev[i]=="1"){
            revNum += pow(2,i);
        }
    }
    return revNum;
}

int main(){
    cout << mirrorBits(97);
    return 0;
}