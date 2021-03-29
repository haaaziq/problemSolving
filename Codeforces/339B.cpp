// Xenia and Ringroad
#include<iostream>
using namespace std;

int main(){
    long long int n, m;
    cin >> n;
    cin >> m;

    long long int tasks[m];

    for(int i=0; i<m; i++){
        cin >> tasks[i];
    }

    long long int time = tasks[0] - 1;
    for(int i=1; i<m; i++){
        if(tasks[i] < tasks[i-1]){
            time += ((n-tasks[i-1]) + (tasks[i]-1) + 1);
        } else{
            time += tasks[i]-tasks[i-1];
        }
    }

    cout << time;

    return 0;
}