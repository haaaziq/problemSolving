// Defanging an IP Address

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        string defangIPaddr(string address){
            string res = "";
            for(int i=0; i<address.length(); i++){
                if(address[i] == '.'){
                    res += "[";
                    res += address[i];
                    res += "]";
                } else{
                    res += address[i];
                }
            } 
            return res;       
        }
};

int main(){
    Solution s;
    cout << s.defangIPaddr("255.100.50.0");

    return 0;
}