// Saving the City
#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;

int main(){
    int testCases;
    cin >> testCases;

    while(testCases--){
        int a, b;
        cin >> a >> b;

        string minesString;
        cin >> minesString;

        vector<pair<lli, lli>> subIndex;
        int startI{0}, endI{0};

        for(int i=0; i<minesString.size(); i++){
            if(minesString[i]=='1'){
                startI=i;
                while(minesString[i]=='1'){
                    i++;
                }
                endI=i-1;
                subIndex.push_back(make_pair(startI, endI));
            }
        }
        int count{0};
        for(int i=0; i<minesString.size(); i++){
            if(minesString[i]=='0'){
                count++;
            }
        }
        if(count==minesString.size()){
            cout << "0" << endl;
        } else{
            lli finalCost=a;
            for(lli i=0; i<subIndex.size()-1; i++){
                int starting = subIndex[i].second +1;
                int ending = subIndex[i+1].first;
                if((ending-starting)*b < a){
                    finalCost+=(ending-starting)*b;
                } else{
                    finalCost+=a;
                }
            }
            cout << finalCost << endl;
        }
    }
    return 0;
}