#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    int size = score.size();
    
    for(int i = 0; i < size; i++) {
        vector<int> result;
        int day = i + 1;
        int min = k - 1;
        
        for(int j = 0; j < day; j++) 
            result.push_back(score[j]);
        
        sort(result.begin(), result.end());
        reverse(result.begin(), result.end());
        
        int size_t = result.size();
        int min_t = size_t - 1;
         
        if(size_t < k) answer.push_back(result[min_t]);
        else answer.push_back(result[min]);
        
        result.clear();
    }
    
    return answer;
}