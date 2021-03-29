// Young Physicist
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x[n], y[n], z[n];

    for(int i=0; i<n; i++){
        cin >> x[i];
        cin >> y[i];
        cin >> z[i];
    }

    int totalx{0},totaly{0}, totalz{0};
    for(int i=0; i<n; i++){
        totalx += x[i];
    }
    for(int i=0; i<n; i++){
        totaly += y[i];
    }
    for(int i=0; i<n; i++){
        totalz += z[i];
    }

    if(totalx == 0 && totaly == 0 && totalz == 0){
        cout << "YES";
    } else{
        cout << "NO";
    }

    return 0;
}