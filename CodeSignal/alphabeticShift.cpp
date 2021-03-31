#include<bits/stdc++.h>
using namespace std;

string alphabeticShift(string inputString) {
    for(int i=0; i<inputString.length(); i++){
        if(inputString[i]==122) inputString[i]=97;
        else{
            inputString[i] = inputString[i]+1;
        }
    }
    return inputString;
}

int main(){
    cout << alphabeticShift("crazy");
    return 0;
}