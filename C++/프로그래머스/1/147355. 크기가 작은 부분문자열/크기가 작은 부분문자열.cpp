#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    int t_size = size(t);
    int p_size = size(p);
    int maxsize = t_size - p_size + 1;
    
    for(int i = 0; i < maxsize; i++) {
        string num = "";
        for(int j = 0; j < p_size; j++) {
            char c1 = t[i+j];
            num.push_back(c1);
        }
            if(num <= p) {
                answer++;
            }
    }
    
    return answer;
}