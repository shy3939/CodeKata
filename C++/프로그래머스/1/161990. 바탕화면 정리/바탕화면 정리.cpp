#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer(4, 0);
    int size_x = wallpaper[0].size();
    int size_y = wallpaper.size();
    int first_y = 0;
    int first_x = 51;
    int last_y = 0;
    int last_x = 0;
    
    // #가 첫번째로 나오는 원소값 : lux
    for(int i = 0; i < size_y; i++) {
        string s = wallpaper[i];
        if(s.find("#") != string::npos) {
            first_y = i;
            break;
        }
    }
    answer[0] = first_y;
    
    // #가 가장 먼저 나오는 원소값 : luy
    for(string s : wallpaper) {
        int count = 0;
        for(char c : s) {
            if(c == '#') {
                if(first_x > count) first_x = count;
                break;
            }
            count++;
        }
    }
    answer[1] = first_x;
    
    // #가 나타난 가장 마지막 원소값 : rdx
    for(int i = 0; i < size_y; i++) {
        string s = wallpaper[i];
        if(s.find("#") != string::npos) {
            last_y = i+1;
        }
    }
    answer[2] = last_y;
    
    // #가 나타난 가장 마지막 원소값 : rdy
    for(string s : wallpaper) {
        int count = 1;
        for(char c : s) {
            if(c == '#') {
                if(last_x < count) last_x = count;
            }
            count++;
        }
    }
    answer[3] = last_x;
    return answer;
}