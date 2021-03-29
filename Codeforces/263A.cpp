// Beautiful Matrix
#include<iostream>
using namespace std;

int main(){
    int matrix[5][5];
    int ele;
    int one_i, one_j;
    
    for(int i=0; i<5; i++){
        for(int j=0;j<5;j++){
            cin >> matrix[i][j];
            ele = matrix[i][j];

            if(ele == 1){
                one_i = i;
                one_j = j;
            }
        }
    }

    int moves{0};

    moves += abs(2-one_i);
    moves += abs(2-one_j);

    cout << moves;

    return 0;
}