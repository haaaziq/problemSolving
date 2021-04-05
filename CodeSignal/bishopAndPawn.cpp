#include<bits/stdc++.h>
using namespace std;

bool bishopAndPawn(string bishop, string pawn) {
    if(bishop[0]==pawn[0]) return false;
    if((pawn[0]<bishop[0] && pawn[1]>bishop[1]) || (pawn[0]>bishop[0] && pawn[1]<bishop[1])){
        if(pawn[0]+pawn[1] == bishop[0]+bishop[1]) return true;
    } 
    else if((pawn[0]<bishop[0] && pawn[1]<bishop[1]) || (pawn[0]>bishop[0] && pawn[1]>bishop[1])){
        for(int i=2; i<=8; i=i+2){
            if((pawn[0]+pawn[1]+i == bishop[0]+bishop[1]) || (pawn[0]+pawn[1]-i == bishop[0]+bishop[1])){
                // cout << bishop[0]+bishop[1] << endl;
                // cout << pawn[0]+pawn[1]+i << endl;
                // cout << pawn[0]+pawn[1]-i << endl;
                return true;
            }
        }
    }
    return false;
}

int main(){
    cout << bishopAndPawn("a1","c3");
    return 0;
}