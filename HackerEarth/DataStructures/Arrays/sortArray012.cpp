// Sort an array of 0s, 1s and 2s
// 004/450
#include<bits/stdc++.h>
using namespace std;
void sort012(int a[], int n)
    {
        long long int c0{0}, c1{0}, c2{0};
        
        for(long long int i=0;i<n;i++){
            if(a[i]==0) c0++;
            else if(a[i]==1) c1++;
            else c2++;
        }
        for(long long int i=0;i<c0;i++)
            a[i]=0;
        for(long long int i=c0;i<c0+c1;i++)
            a[i]=1;
        for(long long int i=c0+c1;i<c0+c1+c2;i++)
            a[i]=2; 
    }