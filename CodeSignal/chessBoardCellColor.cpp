#include<bits/stdc++.h>
using namespace std;

bool chessBoardCellColor(string cell1, string cell2) {
    if(((cell1[0]+cell1[1]) % 2 == 0 && (cell2[0]+cell2[1]) % 2 == 0) || ((cell1[0]+cell1[1]) % 2 != 0 && (cell2[0]+cell2[1]) % 2 != 0)){
        cout << cell1[0]+cell1[1] << endl;
        cout << cell2[0]+cell2[1] << endl;
        return true;
    }
    else return false;
}

int main(){
    cout << chessBoardCellColor("A1","C3");
    return 0;
}