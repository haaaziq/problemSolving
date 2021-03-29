#include<bits/stdc++.h>
using namespace std;
int arrayPacking(vector<int> a) {
    vector<string> binRep;
    int temp;
    for(int i=0; i<a.size(); i++){
        if(a[i]==0) binRep.push_back("00000000");
        else{
            while ((a[i]!=1)){
                temp=a[i]%2;
                binRep.push_back(to_string(temp));
                a[i]/=2;
            }
            binRep.push_back("1");
            while(binRep.size()!=(i+1)*8){
                binRep.push_back("0");
            }
        }
    }    
    //   reverse(binRep.begin(), binRep.end());
    int res{0};
    for(int i=0; i<binRep.size(); i++){
        cout << binRep[i];
        if(binRep[i]=="1"){
            res += pow(2,i);
        }
    } cout << endl;
    return res;
}

int main(){
    vector<int> a = {24,85,0};
    cout << arrayPacking(a);
    return 0;
}