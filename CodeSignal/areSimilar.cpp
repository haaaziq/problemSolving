#include<bits/stdc++.h>
using namespace std;

bool areSimilar(vector<int> a, vector<int> b) {
    int unEqCount{0};
    set<int> diff;
    for(int i=0; i<a.size(); i++){
        if(a[i] == b[i]) continue;
        else{
            unEqCount++;
            diff.insert(a[i]);
            diff.insert(b[i]);   
        }
    }
    // cout << diff.size() << endl;
    if(unEqCount%2 !=0 || unEqCount>2 || diff.size() > 2) return false;
    else return true;
}