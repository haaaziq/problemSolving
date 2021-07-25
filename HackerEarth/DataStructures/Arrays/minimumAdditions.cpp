#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCases;
    cin >> testCases;

    while(testCases--){
        long long int n, k;
        cin >> n >> k;
        long long int arr[n];
        long long int sum{0};
        
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum += arr[i];
        }

        if((sum/n) <= k) cout << 0 << "\n";
        else{
            long long int ans;
            /*
                    sum/n+i <= k
                =>  n+i = sum/k+1 + 1
                => i => ans i.e, no. of 0s to be added
            */
            // for(int i=1; i>0; i++){
            //     if(floor((sum)/(n+i)) <= k){
            //         ans = i;
            //         break;
            //     }
            // }
            ans = (sum/(k+1)) + 1 - n;
            cout << ans << "\n";
        }


    }

    return 0;
}