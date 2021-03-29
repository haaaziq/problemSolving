// Move and Turn
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int result=0;
    if(n%2 == 0){
        result = (n/2 + 1)*(n/2 + 1);
    }
    else{
        for(int i=(n/2)+1; i>0; i--){
            result += 4*i;
        }
    }
    cout << result << endl;
    return 0;
}