#include<bits/stdc++.h>
using namespace std;

bool isBeautifulString(string inputString) {
    map<char, int> freqMap;
    for(int i=97; i<=122; i++) freqMap[i]=0;
    for(int i=0; i<inputString.length(); i++){
        freqMap[inputString[i]]++;
    }
    vector<int> freqIncOrder;
    sort(inputString.begin(), inputString.end(), greater<char>());
    char last=inputString[0];
    // cout << last << endl;
    for(auto i=freqMap.begin(); i!=freqMap.end(); i++){
        // cout << i->first << " -> " << i->second << endl;
        freqIncOrder.push_back(i->second);
        if(i->first == last) break;
    }
    for(int i=0; i<freqIncOrder.size()-1; i++){
        if(freqIncOrder[i] < freqIncOrder[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    cout << isBeautifulString("bbc");
    return 0;
}