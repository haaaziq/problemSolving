// Canine poetry
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int testCases;
    cin >> testCases;

    while(testCases--){
        int count{0};
        string str;
        cin >> str;
        vector<int> changed(str.size(), 0);

        char first = str[0];
        for(int i=1; i<str.size(); i++){
            if((str[i] == first) && changed[i]==0 && changed[i-1]==0){
                count++;
                changed[i] = 1;
            }
            if(i != (str.size() - 1)){
                if((str[i+1] == first) && changed[i+1]==0 && changed[i-1]==0){
                    count++;
                    changed[i+1] = 1;
                }
            }
            
            first = str[i];
        }

        cout << count << endl;
    }

    return 0;
}