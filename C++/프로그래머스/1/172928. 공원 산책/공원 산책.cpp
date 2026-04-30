#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer = {0, 0};
    vector<pair<int, int>> barrier;
    int size_p = park.size();
    int size_q = park[0].size();
    int size = routes.size();
    
    for(int i = 0; i < size_p; i++) {
        int count = 0;
        for(char c : park[i]) {
            if(c == 'X') barrier.push_back({i, count});
            if(c == 'S') {
                answer[0] += i;
                answer[1] += count;
            }
            count++;
        }
    }
    
    for(int i = 0; i < size; i++) {
        if(routes[i][0] == 'E') {
            int result = stoi(routes[i].substr(2));
            int cur_r = answer[0];
            int cur_c = answer[1];
            bool Is_block = false;
            
            if(cur_c + result >= size_q) Is_block = true;
            else {
                for(int j = 1; j <= result; j++) {
                    int next_r = cur_r;
                    int next_c = cur_c + j;
                    for(auto[row, cnt] : barrier) {
                        if(next_r == row && next_c == cnt) {
                            Is_block = true;
                            break;
                        }
                    }
                    if(Is_block) break;
                }
            }
        
            if(!Is_block) answer[1] += result;
        }
        else if(routes[i][0] == 'S') {
            int result = stoi(routes[i].substr(2));
            int cur_r = answer[0];
            int cur_c = answer[1];
            bool Is_block = false;
            
          if(cur_r + result >= size_p) Is_block = true;
            else {
                for(int j = 1; j <= result; j++) {
                    int next_r = cur_r + j;
                    int next_c = cur_c;
                    for(auto[row, cnt] : barrier) {
                        if(next_r == row && next_c == cnt) {
                            Is_block = true;
                            break;
                        }
                    }
                    if(Is_block) break;
                }
            }
            
            if(!Is_block) answer[0] += result;
        }
        else if(routes[i][0] == 'W') {
            int result = stoi(routes[i].substr(2));
            int cur_r = answer[0];
            int cur_c = answer[1];
            bool Is_block = false;
           if(cur_c - result < 0) Is_block = true;
            else {
                for(int j = 1; j <= result; j++) {
                    int next_r = cur_r;
                    int next_c = cur_c - j;
                    for(auto[row, cnt] : barrier) {
                        if(next_r == row && next_c == cnt) {
                            Is_block = true;
                            break;
                        }
                    }
                    if(Is_block) break;
                }
            }
            if(!Is_block) answer[1] -= result;
        }
        else if(routes[i][0] == 'N') {
            int result = stoi(routes[i].substr(2));
            int cur_r = answer[0];
            int cur_c = answer[1];
            bool Is_block = false;
            
            if(cur_r - result < 0) Is_block = true;
            else {
                for(int j = 1; j <= result; j++) {
                    int next_r = cur_r - j;
                    int next_c = cur_c;
                    for(auto[row, cnt] : barrier) {
                        if(next_r == row && next_c == cnt) {
                            Is_block = true;
                            break;
                        }
                    }
                    if(Is_block) break;
                }
            }
            
            if(!Is_block) answer[0] -= result;
        }
    }
    
    return answer;
}