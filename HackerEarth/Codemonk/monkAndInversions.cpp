#include<bits/stdc++.h>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;

    while(testCases--){
        int n;
        cin >> n;
        int matrix[n][n];
        int res=0;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> matrix[i][j];
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                for(int k=i; k<n; k++){
                    for(int l=j; l<n; l++){
                        if(matrix[i][j] > matrix[k][l]) res++;
                    }
                }          
            }
        }

        cout << res << endl;
    }
    return 0;
}