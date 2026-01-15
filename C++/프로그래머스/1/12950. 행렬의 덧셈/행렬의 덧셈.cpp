#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    int size_row = arr1.size();
    int size_col = arr1[0].size();
    
    answer.resize(size_row, vector<int>(size_col));
    
    for(int i = 0; i < size_row; i++){
        for(int j = 0; j < size_col; j++){
            answer[i][j] =arr1[i][j] + arr2[i][j];
        }
    }
    
    return answer;
}