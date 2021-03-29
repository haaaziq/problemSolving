// Number into Sequence
#include<bits/stdc++.h>
using namespace std;

void factorize(long long int n, map<long long int, int> &mapp){
    while(n%2==0){
        mapp[2]++;
        n/=2;
    }
    for(long long int i=3; i<=sqrtl(n); i+=2){
        while(n%i==0){
            mapp[i]++;
            n/=i;
        }
    }
    if(n>2){
        mapp[n]++;
    }
}

int main(){
    int testCases;
    cin>>testCases;
    
    while(testCases--){
        long long int n;
        cin >> n;

        map<long long int, int> factors;
        factorize(n, factors);

        long long int maxmNo{0};
        long long int maxFreq{0};
        
        for(auto i=factors.begin(); i!=factors.end(); i++){
            // cout << i->first << " " << i->second << endl;
            if(maxFreq < i->second){
                maxFreq = i->second;
                maxmNo = i->first;
            }
        }
        cout << maxFreq << endl;
        
        for(int i=1; i<maxFreq; i++){
            cout << maxmNo << " ";
            n/=maxmNo;
        }
        cout << n << endl;
    }

    return 0;
}