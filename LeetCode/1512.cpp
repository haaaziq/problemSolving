// Number of Good Pairs
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count{0};
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]==nums[j]) count++;
            }
        }
        return count;
    }
};

int main(){
    Solution s;
    vector<int> nums {1,1,1,1};
    cout << s.numIdenticalPairs(nums);

    return 0;
}