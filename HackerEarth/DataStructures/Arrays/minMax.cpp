// Maximum and minimum of an array using minimum number of comparisons
// 002 / 450

#include<bits/stdc++.h>
using namespace std;

class Pair{
    private:
        int min;
        int max;
    public:
        void minMax(int arr[], int n){
            for(int i=0; i<n-1; i++){
                if(arr[i]>arr[i+1]) swap(arr[i], arr[i+1]);
            }
            max = arr[n-1];

            for(int i=0; i<n-1; i++){
                if(arr[i]<arr[i+1]) swap(arr[i], arr[i+1]);
            }
            min = arr[n-1];

            cout << "\nMin: " << min << ", Max: " << max << "\n";
        }
};

int main(){
    Pair pair = Pair();
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    pair.minMax(arr,n);

    return 0;
}