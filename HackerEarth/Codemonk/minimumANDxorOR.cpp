#include<bits/stdc++.h>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;

    while(testCases--){
        int N;
        cin >> N;
        long int arr[N];
        for(int i=0; i<N; i++){
            cin >> arr[i];
        }
        sort(arr, arr+N);
        long int res = ((arr[0] ^ arr[1]));
        for(int i=0; i<N-1; i++){
            // for(int j=i+1; j<N; j++){
                long int value = ((arr[i] ^ arr[i+1]));
                if(value < res)
                    res = value;
            // }
        }
        cout << res << endl;
    }

    return 0;
}