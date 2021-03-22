#include<bits/stdc++.h>
using namespace std;

string reverseInParentheses(string inputString) {
    // int openCount{0};
    stack<char> indexesO;
    // vector<int> indexesC;

    for(int i=0; i<inputString.size(); i++){
        if(inputString[i] == '('){
            // openCount++;
            indexesO.push(i);
        } else if(inputString[i] == ')') {
            reverse(inputString.begin() + indexesO.top() + 1, inputString.begin() + i);
            indexesO.pop();
        }
    }

    // int j=openCount-1;
    // for(int i=0; i<openCount; i++){
    //     if(openCount==1 || (indexesO[j] < indexesC[i])){
    //         reverse(inputString.begin()+(indexesO[j]+1), inputString.begin()+(indexesC[i]));
    //         j--;
    //     } else if((indexesO[j] > indexesC[i])){
    //         reverse(inputString.begin()+(indexesO[i]+1), inputString.begin()+(indexesC[i]));
    //     }
    // }
    string res;
    for(int i=0; i<inputString.size(); i++){
        if(inputString[i] == '(' || inputString[i] == ')') continue;
        else res += inputString[i];
    }
    return res;
}

int main(){
    cout << reverseInParentheses("foo(bar(baz))blim");
    return 0;
}