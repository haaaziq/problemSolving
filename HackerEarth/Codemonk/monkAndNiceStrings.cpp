#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n;
    vector<string> allStrings;
    vector<int> niceness;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        allStrings.push_back(s);
    }

    niceness.push_back(0);
    for(int i=1; i<allStrings.size(); i++){
        int temp=0;
        for(int j=0; j<i; j++){
            if(allStrings[j] < allStrings[i]) temp++;
        }
        niceness.push_back(temp);
        temp=0;
    }

    for(int i=0; i<niceness.size(); i++){
        cout << niceness[i] << endl;
    }

    return 0;
}