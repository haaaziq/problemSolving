// Twins
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    int values[n];
    int sum{0};

    for(int i=0; i<n; i++){
        cin >> values[i];
        sum += values[i];
    }
    sort(values, values + n, greater<int>());

    int coins{1};
    int req_sum = values[0];

    if(req_sum > sum-req_sum){
        cout << coins;
    } else{
        for(int i=1; i<n; i++){
            req_sum = req_sum + values[i];
            if(req_sum > (sum - req_sum)){
                cout << coins+1;
                break;
            } else {
                coins++;
            }
        }
    }

    return 0;
}