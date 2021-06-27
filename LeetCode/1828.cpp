// Queries on Number of Points Inside a Circle
#include<bits/stdc++.h>
using namespace std;

bool insideCircle(vector<int> point, vector<int> center, int radius){
    float distance;    
    distance = pow((pow(abs(point[0]-center[0]),2) + pow(abs(point[1]-center[1]),2)),0.5);
    return (distance <= radius);
}

class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> answer, centerCoordinates;
        int count{0};
        for(int i=0; i<queries.size(); i++){
            centerCoordinates.push_back(queries[i][0]);
            centerCoordinates.push_back(queries[i][1]);

            for(int j=0; j<points.size(); j++){
                if(insideCircle(points[j], centerCoordinates, queries[i][2])) count++;
            }
            answer.push_back(count);
            centerCoordinates.clear();
            count=0;
        }
        // cout << "Answer " << endl;
        // for(int i=0; i<answer.size(); i++){
        //     cout << answer[i] << " ";
        // } cout << endl;

        return answer;
    }
};

int main(){
    Solution s;
    vector<vector<int>> points {{1,3},{3,3},{5,3},{2,2}};
    vector<vector<int>> queries {{2,3,1},{4,3,1},{1,1,2}};

    s.countPoints(points, queries);
    return 0;
}