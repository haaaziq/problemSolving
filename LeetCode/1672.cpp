//Richest Customer Wealth

#include<bits/stdc++.h>
using namespace std;

int maxm(vector<int>a){
    int mxm = a[0];
    for(int i=1; i<a.size(); i++){
        if(a[i] > mxm) mxm = a[i];
    }
    return mxm;
}

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> wealths;
        int temp{0};
        for(int i=0; i<accounts.size(); i++){
            for(int j=0; j<accounts[0].size(); j++){
                temp += accounts[i][j];
            }
            wealths.push_back(temp);
            temp = 0;
        }
        return maxm(wealths);
    }
};

int main(){
    vector<vector<int>> accounts{{1,2,3},{3,2,1}};
    Solution s;
    cout << s.maximumWealth(accounts);
    return 0;
}
