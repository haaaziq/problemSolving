#include<bits/stdc++.h>
using namespace std;

bool isLucky(int n) {
    int digits = (log10(n)+1);
    int firstHalf{0}, secondHalf{0};
    for(int i=0; i<digits/2; i++){
        firstHalf += n % 10; 
        n = n/10;
    }
    for(int i=0; i<digits/2; i++){
        secondHalf += n % 10; 
        n = n/10;
    }
    
    return (firstHalf == secondHalf);
}

/*
Ticket numbers usually consist of an even number of digits. 
A ticket number is considered lucky if the sum of the first half of the digits is equal to the sum of the second half.
Given a ticket number n, determine if it's lucky or not.
*/