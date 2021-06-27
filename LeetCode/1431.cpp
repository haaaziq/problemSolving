// Kids With the Greatest Number of Candies

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
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int greatest = maxm(candies);
        vector<bool> result;
        for(int i=0; i<candies.size(); i++){
            if(candies[i]+extraCandies >= greatest) result.push_back(true);
            else result.push_back(false);
        }
        // for(int i=0; i<result.size(); i++) {
        //     cout << result[i] << " ";
        // }
        return result;
    }
};

int main(){
    Solution s;
    vector<int> candies{2,3,5,1,3};
    int extraCandies=3;
    s.kidsWithCandies(candies, extraCandies);
    return 0;
}