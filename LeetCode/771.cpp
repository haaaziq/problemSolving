// Jewels and stones

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count{0};
        for(int i=0; i<jewels.length(); i++){
            for(int j=0; j<stones.length(); j++){
                if(jewels[i]==stones[j]) count++;
            }
        }
        return count;
    }
};

int main(){
    Solution s;
    cout << s.numJewelsInStones("aA", "aAAbbbb");
    return 0;
}