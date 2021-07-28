// Kth Smallest Element
// 003/450

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N;

    int arr[N];
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }

    cin >> K;

    sort(arr, arr+N);

    cout << arr[K-1] << endl;
    
    return 0;
}