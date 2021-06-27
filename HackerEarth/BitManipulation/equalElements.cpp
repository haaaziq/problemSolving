#include<bits/stdc++.h>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;

    while(testCases--){
        int n;
        cin >> n;

        int evens{0}, odds{0};

        // long long int arr[n];
        long long int temp;

        for(int i=0; i<n; i++){
            // cin >> arr[i];
            cin >> temp;
            temp%2==0 ? evens++ : odds++;
        }

        // cout << "evens: " << evens << ", odds: " << odds << endl;
        cout << min(evens, odds) << endl;
    }

    return 0;
}