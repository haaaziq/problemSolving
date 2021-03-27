#include<bits/stdc++.h>
using namespace std;

int killtheBit(int n, int k) {
  vector<string> binRep;
  int temp;
  while ((n!=1)){
      temp=n%2;
      binRep.push_back(to_string(temp));
      n/=2;
  }
  binRep.push_back("1");
//   reverse(binRep.begin(), binRep.end());
  binRep[k-1] = "0";
  int res{0};
  for(int i=0; i<binRep.size(); i++){
      if(binRep[i]=="1"){
          res += pow(2,i);
      }
  }
  return res;
}

int killKthBit(int n, int k) {
  return (n==0 ? 0 : killtheBit(n, k));
}

int main(){
    cout << killKthBit(37, 3);
    return 0;
}