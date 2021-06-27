// Check if the Sentence Is Pangram

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence){
        set<string> stringSet;
        for(char c: sentence){
            stringSet.insert(string{c});
        }
        return (stringSet.size()==26);
    }
};

int main(){
    Solution s;
    cout << s.checkIfPangram("thequickbrownfoxjumpsoverthelazydog");
    return 0;
}