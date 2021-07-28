//Move all the negative elements to one side of the array 
// 005/450
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int j=0; // index of +ve num
    for(int i=0; i<n; i++){
        if(arr[i] < 0){
            if(i!=j)
                swap(arr[i], arr[j]);
            j++;
        }
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}