// String Task
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    str.erase(remove(str.begin(), str.end(), 'a'), str.end());
    str.erase(remove(str.begin(), str.end(), 'e'), str.end());
    str.erase(remove(str.begin(), str.end(), 'i'), str.end());
    str.erase(remove(str.begin(), str.end(), 'o'), str.end());
    str.erase(remove(str.begin(), str.end(), 'u'), str.end());
    str.erase(remove(str.begin(), str.end(), 'y'), str.end());

    int len = str.length();
    int i=0;
    while(i != len){
        str.insert(i*2, ".");
        i++;
    }
    cout << str << endl;
    return 0;
}