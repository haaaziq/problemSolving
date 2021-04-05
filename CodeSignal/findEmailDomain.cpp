#include<bits/stdc++.h>
using namespace std;

string findEmailDomain(string address) {
    int atTheRate = address.find_last_of("@");
    return address.substr(atTheRate+1);
}

int main(){
    cout << findEmailDomain("fully-qualified-domain@codesignal.com");
    return 0;
}