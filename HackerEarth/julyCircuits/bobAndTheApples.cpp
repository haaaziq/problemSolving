#include<bits/stdc++.h>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;

    while (testCases--){
        int n, m;
        cin >> n >> m;
        int v[n], p[n];

        vector< pair<int,int> > pairs;
        for(int i=0; i<n; i++){
            cin >> v[i] >> p[i];
            pairs.push_back(make_pair(v[i], p[i]));
        }

        sort(pairs.rbegin(), pairs.rend());

        long int maxVit{0}, price{0};

        for(int i=0; i<n; i++){
            // cout << pairs[i].first << " " << pairs[i].second << endl;
            if(price+pairs[i].second <= m){
                maxVit += pairs[i].first;
                price = price+pairs[i].second;
            }
            else if(price+floor(pairs[i].second/2) <= m){
                maxVit += pairs[i].first;
                price = price+pairs[i].second/2;
            }
            else break;
        }

        cout << maxVit << endl;

    }
    
    return 0;
}