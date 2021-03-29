// Petya and Strings
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str1;
    cin >> str1;

    string str2;
    cin >> str2;

    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    int len = str1.length();

    for(int i=0; i<len; i++){
        if(str1[i] == str2[i]){
            if(i == len-1){
                cout << "0";
                break;
            }
            else continue;
        }

        else if(str1[i] < str2[i]){
            cout << "-1";
            break;
        }

        else{
            cout << "1";
            break;
        }
    }
    return 0;
}