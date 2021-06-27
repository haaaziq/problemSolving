#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int k;

    cin >> s;
    cin >> k;

    vector<string> allSuffixes;
    allSuffixes.push_back(s);

    for(int i=1; i<s.length(); i++){
        allSuffixes.push_back(s.substr(i, s.length()));
    }
    sort(allSuffixes.begin(), allSuffixes.end());

    // for(int i=0; i<allSuffixes.size(); i++){
    //     cout << allSuffixes[i] << " ";
    // } cout << endl;
    cout << allSuffixes[k-1] << endl;
    return 0;
}