#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    
    for(int i = 0; i < absolutes.size(); i++){
        if(absolutes[i] == 0){
            absolutes[i] = 0;
        }
        else if(absolutes[i] > 0){
            if(signs[i] == true){
                absolutes[i] = absolutes[i];
            }
            else {
                absolutes[i] = -absolutes[i];
            }
        }
        else return -1;
        
        answer += absolutes[i];
    }
    return answer;
}