#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> s;
    
    for(int x : ingredient) {
        s.push_back(x);
        
        if(s.size() >= 4) {
            int n = s.size();
            
            if(s[n-4] == 1&& s[n-3] == 2 && s[n-2] == 3 && s[n-1] == 1) {
                answer++;
                
                for(int i = 0; i < 4; i++) s.pop_back();
            }
        }
    }
    
    return answer;
}