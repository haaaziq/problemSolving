#include<bits/stdc++.h>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;

    while(testCases--){
        int n, k;
        cin >> n >> k;

        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int start;
        if(k > n)
            start = n-(k%n);
        else{
            start = n-k; 
        }

        for(int i=start; i<n; i++){
            cout << arr[i] << " ";
        }
        for(int i=0; i<start; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}