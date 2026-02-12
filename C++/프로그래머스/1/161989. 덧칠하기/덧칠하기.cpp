#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    vector<int> Wall(n, 1);
    int size = section.size();
    
    
    for(int i = 0; i < size; i++) {
        int Num = section[i]-1;
        Wall[Num] = 0;
    }
    
    for(int i = 0; i < n; i++) {
        if(Wall[i] == 0) {
            if(i+m < n)
                for(int j = i; j < i+m; j++) {
                    Wall[j] = 1;
                }
            else if(i+m >= n) {
                for(int j = i; j < n; j++) {
                    Wall[j] = 1;
                }
            }
            answer++;
        }
    }
    
    return answer;
}