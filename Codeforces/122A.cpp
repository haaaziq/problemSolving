// Lucky Division
#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;

    int lucky[13] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 777};
    bool temp = false;
    for(int i=0; i<13; i++){
        if(n % lucky[i] == 0){
            temp = true;
        }
    }
    if(temp){
        cout << "YES";
    } else{
        cout << "NO";
    }

    return 0;
}