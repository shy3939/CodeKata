#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    int arr_size = array.size()-1;
    int size = commands.size();
    
    for(int i = 0; i < size; i ++) {
        int min = commands[i][0];
        int max = commands[i][1];
        int num = commands[i][2];
        
//         if(max >= arr_size) max = arr_size;
        
        min -= 1;
        num -= 1;
        
        vector<int> sub(array.begin() + min, array.begin() + max);
        sort(sub.begin(), sub.end());
        int result = sub[num];
        answer.push_back(result);
    }
    
    return answer;
}