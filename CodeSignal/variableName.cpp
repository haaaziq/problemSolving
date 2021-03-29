#include<bits/stdc++.h>
using namespace std;

bool variableName(string name) {
    int temp=0;
    if(name[0] >= 48 && name[0] <= 57) return false;
    for(int i=0; i<name.length(); i++){
        if((name[i] >= 65 && name[i] <= 90) || name[i]==95 || (name[i] >= 48 && name[i] <= 57) || (name[i] >= 97 && name[i] <= 122))
            continue;
        else{
            cout << name[i] << endl;
            temp=1;
            break;
        };
    }
    if(temp==1) return false;
    return true;
}

int main(){
    cout << variableName("var_1__Int");
    return 0;
}