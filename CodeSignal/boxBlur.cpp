#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> boxBlur(vector<vector<int>> image) {
    vector<vector<int>> finalRes;
    int m = image.size() - 3;
    int n = image[0].size() - 3;
    int finalEle{0};
    vector<int> finalElem;
    for(int k=0; k<=m; k++){
        for(int l=0; l<=n; l++){
            for(int i=k; i<(image.size()-m+k); i++){
                for(int j=l; j<(image[0].size()-n+l); j++){
                    finalEle += image[i][j];
                } 
            }
            // cout << "Ele: " << finalEle/9 << endl;
            finalElem.push_back(floor(finalEle/9));
            finalEle=0;
        }
        finalRes.push_back(finalElem);
        finalElem.clear();
    }
    for(int i=0; i<finalRes.size(); i++){
        for(int j=0; j<finalRes[0].size(); j++){
            cout << finalRes[i][j] << " ";
        } cout << endl;
    }

    return finalRes;
}

int main(){
    vector<vector<int>> image = {{7, 4, 0, 1}, 
                                {5, 6, 2, 2}, 
                                {6, 10, 7, 8}, 
                                {1, 4, 2, 0}};
    boxBlur(image);
    return 0;
}