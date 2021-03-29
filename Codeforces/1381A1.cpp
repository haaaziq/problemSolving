// A1. Prefix Flip (Easy Version)

#include<bits/stdc++.h>
using namespace std;

string operation(string bin, int len){
    string b = bin;
    for(int i=0; i<len; i++){
        b[i] == '0' ? b[i] = '1' : b[i] = '0';
    }
    string revStr;
    int j=0;
    for(int i=len-1; i>=0; i--){
        revStr[j] = b[i];
        j++;
    }
    return b;
}

int main(){
    int testCases;
    cin >> testCases;

    while(testCases--){
        int n;
        string a,b;
        cin >> n;
        cin >> a >> b;
        int opCount{0};
        vector<int> prefixLen;

        if(a==b){
            cout << "0" << endl;
        } else{
            for(int j=n-1; j>=0; j--){
                if(a==b) break;
                else if(a[j] == b[j]){
                    a.erase(j);
                    b.erase(j);
                    n=j;
                }
                else{
                    if(a[0] == b[j]){
                        a = operation(a, 1);
                        opCount++;
                        prefixLen.push_back(1);
                    }
                    a = operation(a, j+1);
                    opCount++;
                    prefixLen.push_back(j+1);
                    a.erase(j);
                    b.erase(j);
                    n=j;
                }
            }   
            cout << opCount << " ";
            for(int i=0; i<prefixLen.size(); i++){
                cout << prefixLen[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}