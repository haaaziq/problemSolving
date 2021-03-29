#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int testCases = 0;
    cin >> testCases;
    while(testCases--){
        long long int n,m, result{0};
        
        cin >> n;
        cin >> m;
        long long int friends[n], presents[m];
        for(int i=0; i<n; i++){
            cin >> friends[i];
        }
        for(int i=0; i<m; i++){
            cin >> presents[i];
        }

        sort(friends, friends+n);
        int j=0;
        for(int i=n-1; i>=0; i--){
            if(presents[friends[i]-1] > presents[j]){
                result += presents[j];
                j++;
            }
            else{
                result += presents[friends[i]-1];
            }
        }

        cout << result << endl;
    }    
    return 0;
}