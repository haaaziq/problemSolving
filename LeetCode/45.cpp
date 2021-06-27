// JUMP GAME II

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums[0]==0 || nums.size()==1) return 0;
        int jumps{1};

        int maxJump = nums[0];
        int curJump = nums[0];

        for(int i=1; i<nums.size(); i++){
            // cout << i << endl;
            if(i == nums.size()-1) return jumps;

            maxJump = max(maxJump, i+nums[i]);
            if(i==curJump){
                jumps++;
                curJump = maxJump;
            }
        }
        return jumps;
    }
};

int main(){
    vector<int> nums{1,1,1,1,1};
    Solution s;
    cout << s.jump(nums);
    return 0;
}