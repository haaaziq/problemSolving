#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> minesweeper(vector<vector<bool>> matrix) {
    vector<vector<int>> finalM(matrix.size(), vector<int> (matrix[0].size(), 0));
    vector<pair<int,int>> indexes;
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[0].size(); j++){
            if(matrix[i][j]==1){
                indexes.push_back(make_pair(i, j));
            }
        }
    }
    // for(int i=0; i<finalM.size(); i++){
    //     for(int j=0; j<finalM[0].size(); j++){
    //         cout << finalM[i][j] << " ";
    //     } cout << endl;
    // }
    // cout << endl;
    for(int i=0; i<indexes.size(); i++){
        // cout << indexes[i].first << " " << indexes[i].second << endl;
        if(indexes[i].first-1 >= 0)
            finalM[indexes[i].first-1][indexes[i].second]++;
        if(indexes[i].first-1 >=0 && indexes[i].second-1 >= 0)
            finalM[indexes[i].first-1][indexes[i].second-1]++;
        if(indexes[i].first-1 >=0 && indexes[i].second+1 < matrix[0].size())
            finalM[indexes[i].first-1][indexes[i].second+1]++;
        if(indexes[i].second-1 >=0 )
            finalM[indexes[i].first][indexes[i].second-1]++;
        if(indexes[i].second+1 < matrix[0].size())
            finalM[indexes[i].first][indexes[i].second+1]++;
        if(indexes[i].first+1 < matrix.size() && indexes[i].second-1 >= 0)
            finalM[indexes[i].first+1][indexes[i].second-1]++;
        if(indexes[i].first+1 < matrix.size())
            finalM[indexes[i].first+1][indexes[i].second]++;
        if(indexes[i].second+1 < matrix[0].size() && indexes[i].first+1 < matrix.size())
            finalM[indexes[i].first+1][indexes[i].second+1]++;
    }
    for(int i=0; i<finalM.size(); i++){
        for(int j=0; j<finalM[0].size(); j++){
            cout << finalM[i][j] << " ";
        } cout << endl;
    }
    return finalM;
}

int main(){
    vector<vector<bool>> matrix = {{true,false,false,true}, 
                                   {false,false,true,false}, 
                                   {true,true,false,true}};
    minesweeper(matrix);
    return 0;
}