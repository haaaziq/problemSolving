#include<bits/stdc++.h>
using namespace std;

int rangeBitCount(int a, int b) {
    int onesCount{0};
    vector<string> binRep;
    int temp;
    for(int i=a; i<=b; i++){
        if(i==0) binRep.push_back("0");
        else{
            int n=i;
            while((n!=1)){
                temp = n%2;
                binRep.push_back(to_string(temp));
                n/=2;
            }
            binRep.push_back("1");
        }
    }
    for(int i=0; i<binRep.size(); i++){
        if(binRep[i]=="1") onesCount++;
    }
    return onesCount;
}

int main(){
    cout << rangeBitCount(2,7);
    return 0;
}