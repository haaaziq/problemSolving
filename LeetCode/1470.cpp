// Shuffle the Array

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;
        for(int i=0; i<n; i++){
            res.push_back(nums[i]);
            res.push_back(nums[i+n]);
        }
        return res;
    }
};

int main(){
    Solution s;
    vector<int> nums{1,2,3,4,4,3,2,1};
    int n = 4;
    s.shuffle(nums, n);
    return 0;
}