// Chat Room

#include<iostream>
#include<string>
#include<set>

using namespace std;
int main(){
    string s, res;
    cin >> s;
    
    int h = s.find('h');
    int e = s.find('e', h+1);
    int l = s.find('l', e+1);
    int l_2 = s.find('l', l+1);
    int o = s.find('o', l_2+1);
    
    if(h < e && e < l && l < l_2 && l_2 < o){
        cout << "YES";
    } else{
        cout << "NO";
    }

    return 0;
}