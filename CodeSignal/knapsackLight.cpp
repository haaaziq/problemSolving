#include<bits/stdc++.h>
using namespace std;

int knapsackLight(int value1, int weight1, int value2, int weight2, int maxW){
    if(maxW < min(weight1, weight2)) return 0;
    else if(weight1 + weight2 <= maxW) return (value1 + value2);
    else{
        if(weight1 <= maxW && weight2 <= maxW){
            return max(value1, value2);            
        }
        int res;
        maxW == weight1 ? res = value1: res = value2;
        return res;
    }
}