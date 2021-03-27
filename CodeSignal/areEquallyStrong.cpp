#include<bits/stdc++.h>
using namespace std;

bool areEquallyStrong(int yourLeft, int yourRight, int friendsLeft, int friendsRight){
    int flag=0;
    if(yourLeft==friendsLeft) flag++;
    if(yourLeft==friendsRight) flag++;
    if(yourRight==friendsLeft) flag++;
    if(yourRight==friendsRight) flag++;
    return(flag >= 2); 
}