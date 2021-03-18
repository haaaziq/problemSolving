#include<bits/stdc++.h>
using namespace std;

vector<int> sortByHeight(vector<int> a) {
    vector<int> copy, result;
    for(int i=0; i<a.size(); i++){
        if(a[i] != -1){
            copy.push_back(a[i]);
        }
    }
    
    sort(copy.begin(), copy.end());
    
    int j=0;
    for(int i=0; i<a.size(); i++){
        if(a[i] == -1){
            result.push_back(a[i]);
        } else{
            result.push_back(copy[j]);
            j++;
        }
    }
    // for(int i=0; i<result.size(); i++){
    //     cout << result[i] << " ";
    // } cout << endl;
    
    return result;
}