#include<bits/stdc++.h>
using namespace std;

int circleOfNumbers(int n, int firstNumber) {
    if(firstNumber+n/2 >= n) return (firstNumber-n/2); 
    return (firstNumber+n/2);
}

int main(){
    cout << circleOfNumbers(10,2);
    return 0;
}