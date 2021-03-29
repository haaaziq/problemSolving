// Games
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int home[n], guest[n];

    for(int i=0; i<n; i++){
        cin >> home[i];
        cin >> guest[i];
    }

    int result{0};
    for(int i=0; i<n; i++){
        int temp = home[i];
        
        for(int j=0; j<n; j++){
            if(temp == guest[j]){
                result++;
            }
        }
    }

    cout << result;

    return 0;
}