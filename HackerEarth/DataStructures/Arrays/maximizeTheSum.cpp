#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int testCases;
    cin >> testCases;

    while(testCases--){
        long long int n,k;
        cin >> n >> k;
        long long int arr[n];
        long long int temp, temp1, sum{0};
        vector<long long int> d;
        
        for(long long int i=0; i<n; i++){
            cin >> arr[i];   
        }

        map<long long int, long long int> numCount;
        for(long long int i=0; i<n; i++){
            numCount[arr[i]]++;
        }

        for(auto i=numCount.begin(); i!=numCount.end(); i++){
            d.push_back(i->first * i->second);
        }

        sort(d.begin(), d.end(), greater<long long int>());

        long long int j = (d.size() < k) ? d.size() : k;
        for(long long int i=0; i<j; i++){
            if(d[i]<0) continue;
            sum+=d[i];
        }
        cout << sum << endl;
    }
    return 0;
}