// Knapsack
#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;

bool compare(vector<lli> wt1, vector<lli> wt2){ 
    return (wt1[1] <= wt2[1]); 
}

int main(){
    int testCases;
    cin >> testCases;

    while(testCases--){
        lli n, w;
        cin >> n >> w;

        vector<vector<lli>> weights(n, vector<lli>(2));
        lli j=1;
        for(lli i=0; i<n; i++){
            weights[i][0] = j;
            cin >> weights[i][1];
            j++;
        }
        sort(weights.begin(), weights.end(), compare);

        lli minm = ceil(n/2);
        lli itemsW{0};
        int flag{0}, res=-1;
        vector<lli> finalIndices;
        for(lli i=0; i<n; i++){
            if(itemsW >= minm) break;
            else if(itemsW > w){flag=1; break;}
            else{
                finalIndices.push_back(weights[i][0]);
                itemsW += weights[i][1];
            }
        }
        if(flag==1){
            cout << res << endl;
        } else{
            cout << finalIndices.size() << endl;
            for(int i=0; i<finalIndices.size(); i++){
                cout << finalIndices[i] << " ";
            }
            cout << endl;
        }


    }

    return 0;
}