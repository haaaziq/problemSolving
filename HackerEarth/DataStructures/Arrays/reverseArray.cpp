// 001/450

#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;

    int arr[N];
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }

    int start=0, end=N-1;
    for(int i=0; i<N/2; i++){
        swap(arr[start], arr[end]);
        start += 1;
        end -= 1;
    }

    for(int i=0; i<N; i++){
        cout << arr[i] << "\n";
    }

    return 0;
}