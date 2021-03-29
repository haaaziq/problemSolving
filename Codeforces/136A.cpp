// Presents
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;

    int frnds[n];
    for(int i=0; i<n; i++){
        cin >> frnds[i];
    }
    string res;
    for(int i=0; i<n; i++){
        auto itr = find(frnds, frnds+n, i+1);
        res += to_string(distance(frnds, itr)+1) + " ";
    }
    cout << res;

    return 0;
}