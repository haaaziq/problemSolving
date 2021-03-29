// Helpful Maths
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    cin >> str;
    string res, final;

    int f_1{0}, f_2{0}, f_3{0};
    str.erase(remove(str.begin(), str.end(), '+'), str.end());
    
    for(int i=0; i<str.length(); i++){
        if(str[i] == '1'){
            f_1++;
        }
        else if(str[i] == '2'){
            f_2++;
        }
        else {
            f_3++;
        }
    }
    for(int i=0; i<f_1; i++){
        res+='1';
    }
    for(int i=0; i<f_2; i++){
        res+='2';
    }
    for(int i=0; i<f_3; i++){
        res+='3';
    }

    for(int i=0; i<res.length(); i++){
        final += res[i];
        if(i != res.length()-1){
            final += '+';
        }
    }
    cout << final;
    return 0;
}