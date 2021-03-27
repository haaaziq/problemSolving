#include<bits/stdc++.h>
using namespace std;

bool isIPv4Address(string inputString) {
    vector<int> nums;
    int flag=0, dotCount{0};
    string str="";
    for(int i=0; i<inputString.length(); i++){
        if(inputString[i]=='.'){
            dotCount++;
            if(str=="" || str.length()>3) continue;
            if(str.length() > 1 && str[0]=='0') continue;
            int num = stoi(str);
            nums.push_back(num);
            str = "";
        }else if(inputString[i] == '0' || inputString[i] == '1' || inputString[i] == '2' || inputString[i] == '3' || inputString[i] == '4' || inputString[i] == '5' || inputString[i] == '6' || inputString[i] == '7' || inputString[i] == '8' || inputString[i] == '9'){
            str += inputString[i];
            if(i==(inputString.length()-1)){
                if(str=="" || str.length()>3) continue;
                if(str.length() > 1 && str[0]=='0') continue;
                nums.push_back(stoi(str));
            }
        } else{
            flag=1;
            break;
        }
    }
    for(int i=0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }
    if(nums.size() < 4 || nums.size() > 4) return false;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]>255 || nums[i]<0){
            flag=1;
            break;
        }
    }
    return (flag==0 && dotCount==3);
}

int main(){
    cout << isIPv4Address("64.233.161.00");

    return 0;
}